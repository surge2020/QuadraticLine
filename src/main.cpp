#include "engine.h"

int main()
{
    Engine engine;
    while (engine.getRunning()) {
        engine.events();
        engine.render();
    }
    engine.clean();
    return 0;
}