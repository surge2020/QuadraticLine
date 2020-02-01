#include "engine.h"

int main()
{
    Engine engine;
    while (engine.getRunning()) {
        engine.events();
        engine.render();
        SDL_Delay(1000/60);
    }
    engine.clean();
    return 0;
}