#ifndef PTG_GAME_ENTITY_H
#define PTG_GAME_ENTITY_H
#include "vec2.h"
namespace ptg{
 class GameEntity{
 public:
  GameEntity(int image, Vec2 position);
  virtual ~GameEntity();
  int getImage();
  Vec2 getPosition();
  
 private:
  int _image;
  Vec2  _position;
 };
}//end namespace
#endif