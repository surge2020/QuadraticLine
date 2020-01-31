#ifndef ENGINE
#define ENGINE

#include <SDL2/SDL.h>

class Engine {
public:
    Engine();
    const int WINDOW_WIDTH = 800;
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
};

#endif