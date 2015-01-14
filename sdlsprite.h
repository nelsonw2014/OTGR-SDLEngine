#ifndef SDLSPRITE_H
#define SDLSPRITE_H
#include <SDL2/SDL.h>

class SDLSprite{
private:
    SDL_Texture * texture;
    unsigned int height, width;
    int x, y, r;

public:
    /**
     * @brief SDLSprite Constructor
     * @param t Loaded texture pointer
     * @param w Width in pixels
     * @param h Height in pixels
     * @param x_coordinate X coordinate in pixels
     * @param y_coordinates Y coordinate in pixels
     * @param rotation Rotation in degrees
     */
    SDLSprite(SDL_Texture *t, int w, int h, int x_coordinate = 0, int y_coordinate = 0, int rotation = 0);
    ~SDLSprite();

    /**
     * @brief getTexture
     * @return Pointer to texure of SDLSprite
     */
    SDL_Texture * getTexture() const { return texture; }

    /**
     * @brief getCoordinates
     * @return SDL_Rect with coordinents and size
     */
    SDL_Rect getCoordinates() const;

    /**
     * @brief setCoordinate
     * @param x_coordinate X to be set
     * @param y_coordinate Y to be set
     */
    void setCoordinate(int x_coordinate, int y_coordinate);


};

#endif // SDLSPRITE_H
