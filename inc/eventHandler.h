#ifndef EVENT_HANDLER
#define EVENT_HANDLER

#include <SDL2/SDL.h>

class EventHandler {
public:
    EventHandler(bool* running);
    void input();
private:
    bool* running;
    SDL_Event event;
};

#endif