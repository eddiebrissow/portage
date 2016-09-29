#ifndef PTG_GAME_CONTEXT_H
#define PTG_GAME_CONTEXT_H

#include "display_file.h"

namespace ptg{
 class GameContext{
 public:
  GameContext(int x, int y);
  virtual ~GameContext();
  virtual void draw(ptg::DisplayFile* df);
  virtual int  loadImage(char* path);
  
 private:
  int _w;
  int _h;
  
  
 };
}//end namespace

#endif