
#include <SDL.h>
#include <SDL_ttf.h>

#pragma comment(lib,"SDL2.lib")
#pragma comment(lib,"SDL2main.lib")
#pragma comment(lib, "SDL2_ttf.lib")

#include<string>
#include <iostream>
using namespace std;


void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, int w, int h) {
	//Setup the destination rectangle to be at the position we want
	SDL_Rect dst;
	dst.x = x;
	dst.y = y;
	dst.w = w;
	dst.h = h;
	SDL_RenderCopy(ren, tex, NULL, &dst);
}


SDL_Texture* renderText(const std::string &message, const std::string &fontFile,
	SDL_Color color, int fontSize, SDL_Renderer *renderer)
{
	//Open the font
	TTF_Font *font = TTF_OpenFont(fontFile.c_str(), fontSize);
	if (font == nullptr) {
		TTF_CloseFont(font);
		return nullptr;
	}
	//We need to first render to a surface as that's what TTF_RenderText
	//returns, then load that surface into a texture
	SDL_Surface *surf = TTF_RenderText_Blended(font, message.c_str(), color);
	if (surf == nullptr) {
		TTF_CloseFont(font);

		return nullptr;
	}
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surf);
	if (texture == nullptr) {
		SDL_FreeSurface(surf);
		TTF_CloseFont(font);
	}
	//Clean up the surface and font
	SDL_FreeSurface(surf);
	TTF_CloseFont(font);
	return texture;
}



int main(int argc, char *argv[])
{

	string text = " ";


	int SDL_Init(SDL_INIT_EVERYTHING);

	if (TTF_Init() != 0) {

		SDL_Quit();
		return 1;
	}

	SDL_bool done = SDL_FALSE;



	SDL_Window    *window = NULL;
	SDL_Renderer  *renderer = NULL;

	SDL_Rect rect;
	rect.h = 1366;
	rect.w = 768;
	rect.x = 0;
	rect.y = 0;



	window = SDL_CreateWindow("Text input showing", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1366, 768, SDL_WINDOW_RESIZABLE);

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	while (!done) {
		SDL_StartTextInput();
		SDL_Event event;
		while (SDL_PollEvent(&event)) {


			switch (event.type) {
			case SDL_QUIT:
				/* Quit */
				done = SDL_TRUE;
				break;
			case SDL_TEXTINPUT:
				/* Add new text onto the end of our text */
				text.append(event.text.text);
				break;
			case SDL_TEXTEDITING:
				/*
				Update the composition text.
				Update the cursor position.
				Update the selection length (if any).
				*/
				text.append(event.edit.text);

				break;



				break;
			}




			SDL_Color color = { 255, 255, 255, 255 };
			SDL_Texture *image = renderText(text.c_str(), "C:\\Windows\\Fonts\\Arial.ttf", color, 58, renderer);
			if (image == nullptr) {

				TTF_Quit();
				SDL_Quit();
				return 1;
			}
			int x = 0;
			int y = 10;

			//Note: This is within the program's main loop
			
			//We can draw our message as we do any other texture, since it's been
			//rendered to a texture
			renderTexture(image, renderer, x, y, text.size() * 12, 24);
			SDL_RenderPresent(renderer);

		}

		SDL_StopTextInput();
	}

	SDL_Quit();
	return 0;
}


