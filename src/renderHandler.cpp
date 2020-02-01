#include "renderHandler.h"

RenderHandler::RenderHandler(SDL_Renderer* renderer, Line* line)
{
    this->renderer = renderer;
    this->line = line;
}

void RenderHandler::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
    line->render();
    SDL_RenderPresent(renderer);
}