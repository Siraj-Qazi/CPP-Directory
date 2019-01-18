#include "window.h"
SDL_Rect rect;

Window::Window(const string& ti, int w, int h) :title(ti), width(w), height(h)
{
	closed = !init();
}


bool Window::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		cerr << "\n An Error occured.";
		return 0;
	}

	window = SDL_CreateWindow(
		title.c_str(),
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		width,
		height,
		SDL_WINDOW_RESIZABLE
	    );

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

	if (window == nullptr)
	{
		cerr << "\n Failed to create window.";
		return 0;

	}


	return true;
}

Window::~Window()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Window::pollEvents()
{
	SDL_SetRenderDrawColor(renderer, 0, 0, 200, 255);
	SDL_RenderClear(renderer);
	rect.w = 120;
	rect.h = 120;
	rect.x = width / 2 - rect.w / 2;;
	rect.y = height / 2 - rect.h / 2;

	SDL_SetRenderDrawColor(renderer, 200, 0, 200, 255);
	SDL_RenderFillRect(renderer, &rect);
	SDL_RenderPresent(renderer);
	SDL_Event event;
	if (SDL_PollEvent(&event)) {

		switch (event.type)
		{
		case SDL_QUIT:
			closed = true; break;

		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_a:
				cout << "\n You pressed 'a'\n"; break;
			case SDLK_x:
				cout << "\n You pressed 'x'\n"; break;
			case SDLK_ESCAPE:
				closed = true; break;
			case SDLK_LEFT:
				rect.x -= 100;
				SDL_RenderFillRect(renderer, &rect);
				SDL_RenderPresent(renderer);
				break;

			case SDLK_RIGHT:
				rect.x += 100;
				SDL_RenderFillRect(renderer, &rect);
				SDL_RenderPresent(renderer);
				break;

			case SDLK_UP:
				rect.y -= 100;
				SDL_RenderFillRect(renderer, &rect);
				SDL_RenderPresent(renderer);
				break;

			case SDLK_DOWN:
				rect.y += 100;
				SDL_RenderFillRect(renderer, &rect);
				SDL_RenderPresent(renderer);
				break;



			default:
				cout << "\n You're pressing something other than 'a' or 'x'\n";
			}
		case SDL_MOUSEMOTION:
			cout << "\n Mouse at (" << event.motion.x << "," << event.motion.y << ")"; break;
		case SDL_MOUSEBUTTONDOWN:
			cout << "\n Mouse button clicked!\n"; break;
		case SDL_MOUSEBUTTONUP:
			cout << "\n Mouse Button released!\n"; break;
		
		default:
			break;
		}
	}
}

void Window::color()
{
	SDL_SetRenderDrawColor(renderer, 0, 0, 200, 255);
	SDL_RenderClear(renderer);
	rect.w = 120;
	rect.h = 120;
	rect.x = width / 2 - rect.w / 2;;
	rect.y = height / 2 - rect.h / 2;

	SDL_SetRenderDrawColor(renderer, 200, 0, 200, 255);
	SDL_RenderFillRect(renderer, &rect);
	SDL_RenderPresent(renderer);
}