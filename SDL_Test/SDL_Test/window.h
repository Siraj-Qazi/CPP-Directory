#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_ttf.h>
using namespace std;

class Window
{
public:
	Window(const string& title, int width, int height);
	~Window();
	inline bool isClosed() { return closed; }
	bool init();
	void pollEvents();
	void color();

private:
	string title;
	int width;
	int height;
	bool closed = false;

	SDL_Window* window;
	SDL_Renderer* renderer;


};
