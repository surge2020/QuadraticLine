#include "engine.h"

Engine::Engine()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow(
        WINDOW_TITLE,
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_FLAGS);
    renderer = SDL_CreateRenderer(window, RENDERER_INDEX, RENDERER_FLAGS);
    running = true;
    eventHandler = new EventHandler(&running);
    renderHandler = new RenderHandler(renderer);
}

bool Engine::getRunning()
{
    return running;
}

void Engine::events()
{
    eventHandler->input();
}

void Engine::render()
{
    renderHandler->render();
}

void Engine::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}