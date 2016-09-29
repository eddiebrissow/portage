#include "game_entity.h"

namespace ptg{
 
GameEntity::GameEntity(int image, Vec2 position)
:_image(image), _position(position){}

int GameEntity::getImage(){
 return _image;
}




Vec2 GameEntity::getPosition(){
 return _position;
}

GameEntity::~GameEntity(){};

}//end namespace