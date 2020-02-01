#ifndef RENDER_HANDLER
#define RENDER_HANDLER

#include <SDL2/SDL.h>
#include "line.h"

class RenderHandler {
public:
    RenderHandler(SDL_Renderer* renderer, Line* line);
    void render();
private:
    SDL_Renderer* renderer;
    Line* line;
};

#endif