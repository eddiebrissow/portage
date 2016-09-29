#include "game_context.h"

namespace ptg{
 
GameContext::GameContext(int x, int y):_w(x), _h(y){};

GameContext::~GameContext(){};

int GameContext::loadImage(char* path){}

void GameContext::draw(DisplayFile * df){}

 
}//end namespace