#include "image_keeper.h"

namespace ptg{
ImageKeeper::ImageKeeper(){}

ImageKeeper::~ImageKeeper(){
 _images.clear();
}

SDL_Texture* ImageKeeper::getImage(int id){
 return _images.at(id);
}

int ImageKeeper::loadImage(SDL_Renderer &r ,char* path){
 SDL_Surface *img;
 img = IMG_Load(path);
 _images.push_back(SDL_CreateTextureFromSurface(&r, img));
 return _images.size() - 1;
}

}//end namespace