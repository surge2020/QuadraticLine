#ifndef ENGINE
#define ENGINE

#include <SDL2/SDL.h>
#include "eventHandler.h"
#include "renderHandler.h"

class Engine {
public:
    Engine();
    const int WINDOW_WIDTH = 600;
    const int WINDOW_HEIGHT = 600;
    bool getRunning();
    void events();
    void render();
    void clean();
private:
    SDL_Window* window;
    const char* WINDOW_TITLE = "Quadratic Line";
    const int WINDOW_FLAGS = 0;
    SDL_Renderer* renderer;
    const int RENDERER_INDEX = -1;
    const int RENDERER_FLAGS = 0;
    bool running;
    EventHandler* eventHandler;
    RenderHandler* renderHandler;
};

#endif