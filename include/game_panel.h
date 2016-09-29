#ifndef PTG_GAME_PANEL_H
#define PTG_GAME_PANEL_H

#include "display_file.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_surface.h>
#include "image_keeper.h"

namespace ptg{
 class GamePanel{
 public:
  GamePanel();
  virtual ~GamePanel();
  void setDisplayFile(ptg::DisplayFile* dp);
  void paint(SDL_Renderer& renderer);
  int loadImage(SDL_Renderer & render, char* path);
  
 private:
  ImageKeeper _imageKeeper;
  DisplayFile *_df;
  SDL_Texture * im;
  
  
 };
}//end namespace

#endif