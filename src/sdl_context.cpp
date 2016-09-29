#include "sdl_context.h"

namespace ptg{
SDL_Context::SDL_Context(int w, int h) : GameContext(w,h){
      if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Init fail : %s\n", SDL_GetError());
    }
    _window = SDL_CreateWindow("Portage", SDL_WINDOWPOS_UNDEFINED,
                  SDL_WINDOWPOS_UNDEFINED, 
                  w, h, 0);
    
         if (!_window) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Window creation fail : %s\n",SDL_GetError());
    }
 
  _surface = SDL_GetWindowSurface(_window);
  _renderer = SDL_CreateSoftwareRenderer(_surface);  
  if (!_renderer) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Render creation for surface fail : %s\n",SDL_GetError());
    }
 
 
};

SDL_Context::~SDL_Context(){};

void SDL_Context::draw(DisplayFile * df){
_gamePanel.setDisplayFile(df);
_gamePanel.paint(*_renderer);
SDL_UpdateWindowSurface(_window);

}

int SDL_Context::loadImage(char* path){
 return _gamePanel.loadImage(*_renderer, path);
}


 
 
}//end namespace