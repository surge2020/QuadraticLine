#include "renderHandler.h"

RenderHandler::RenderHandler(SDL_Renderer* renderer)
{
    this->renderer = renderer;
}

void RenderHandler::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}