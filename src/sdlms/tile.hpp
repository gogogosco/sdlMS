#ifndef HEADER_SDLMS_TILE
#define HEADER_SDLMS_TILE

#include <SDL2/SDL.h>

#include "sdlms/graphics.hpp"
#include "sdlms/camera.hpp"
#include "sdlms/sprite.hpp"

class Tile : public Sprite
{
public:
    Tile(SDL_Texture *texture, SDL_Rect *rect, int format, int layer, int z);
    void draw();

public:
    int _layer;
    int _z;

};
#endif