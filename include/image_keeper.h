#ifndef PTG_IMAGE_KEEPER_H
#define PTG_IMAGE_KEEPER_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

namespace ptg{
 class ImageKeeper{
 public:
  ImageKeeper();
  virtual ~ImageKeeper();
  int loadImage(SDL_Renderer &r , char* path);
  SDL_Texture* getImage(int id);
 private:
  std::vector<SDL_Texture*> _images;
 };
}//end namespace


#endif