#ifndef PTG_GAME_ENGINE_H
#define PTG_GAME_ENGINE_H

#include "game_context.h"
#include "display_file.h"
#include <SDL2/SDL.h>
#include <vector>

namespace ptg{
 class GameEngine{
 public:
  GameEngine();
  virtual ~GameEngine();
  void start();
  
 private:
  bool _inGame;
  GameContext *_ctx;
  DisplayFile *_df;
  std::vector<DisplayFile *> list;
  int selected;
  void init();
  void update();
  void event(SDL_Event& e);
  void draw();
  bool _done;

  
  
 };
}// end namespace
#endif