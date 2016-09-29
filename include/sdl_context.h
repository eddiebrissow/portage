#ifndef PTG_SDL_CONTEXT_H
#define PTG_SDL_CONTEXT_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "display_file.h"
#include "game_panel.h"
#include "game_context.h"

namespace ptg{
 class SDL_Context : public GameContext{
 public:
  SDL_Context(int w, int h) ;
  virtual ~SDL_Context();
  int loadImage(char* path);
  void draw(ptg::DisplayFile* df);
 private:
  GamePanel _gamePanel;
  SDL_Window *_window;
  SDL_Renderer* _renderer;
  SDL_Surface* _surface;

  
 };
}//end namespace

#endif