#include "line.h"

Line::Line(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    generate();
}

void Line::generate()
{
    
}

void Line::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    for (SDL_Rect pixel : pixels) {
        SDL_RenderFillRect(renderer, &pixel);
    }
}