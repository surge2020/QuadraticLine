#ifndef LINE
#define LINE

#include <vector>
#include <SDL2/SDL.h>

using std::vector;

class Line {
public:
    Line(SDL_Renderer* renderer);
    void generate();
    void render();
private:
    SDL_Renderer* renderer;
    vector<SDL_Rect> pixels;
};

#endif