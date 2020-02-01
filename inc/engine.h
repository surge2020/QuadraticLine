#ifndef ENGINE
#define ENGINE

#include <SDL2/SDL.h>
#include "eventHandler.h"
#include "line.h"
#include "renderHandler.h"

class Engine {
public:
    Engine();
    bool getRunning();
    void events();
    void render();
    void clean();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;
    EventHandler* eventHandler;
    Line* line;
    RenderHandler* renderHandler;
};

#endif