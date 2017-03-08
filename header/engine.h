/*  Author: Francisco Cidade 
    Desc:
        Main game engine class, init, loads and finish the program.
*/

#include <SDL2/SDL_ttf.h>
#include <vector>
#include "gameobject.h"

#ifndef ENGINE_H
#define ENGINE_H
class Engine{
public:
	void init();
	void loop();
	void draw();
private:
	TTF_Font *_font;
	SDL_Event _event;
	SDL_Window *_window;
	SDL_Renderer *_renderer;
	std::vector<GameObject> _objects;
	size_t _screen_width, _screen_height;
	void quit(int);
};
#endif