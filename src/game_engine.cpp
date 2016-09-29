#include "game_engine.h"
#include "sdl_context.h"
#include "game_entity.h"
#include "vec2.h"

namespace ptg{

GameEngine::GameEngine(){};

void GameEngine::start(){
 init();
 SDL_Event e;
 
 while(!_done){
  draw();
  event(e);
 }
 
};

void GameEngine::init(){
 int w = 800;
 int h = 600;
 _ctx =  new  SDL_Context(w, h);
 Vec2 p(0,0, -1, -1);
 Vec2 p2((w-300)/2 ,(h - 150)/2,300, 150);
 GameEntity car(_ctx->loadImage(
  "/home/edgar/workspace/portage/textures/text.png"), p2);
  GameEntity bg(_ctx->loadImage(
  "/home/edgar/workspace/portage/textures/bg.jpg"), p);
  
   GameEntity bg2(_ctx->loadImage(
  "/home/edgar/workspace/portage/textures/game.jpg"), p);
 DisplayFile *df =  new DisplayFile(6);
 df->add(car, 1);
 df->add(bg, 0);
 DisplayFile *df2 =  new DisplayFile(6);
 df2->add(bg2, 0);
 list.push_back(df);
 list.push_back(df2);
selected = 0; 
};

void GameEngine::event(SDL_Event &e){
 
 while(SDL_PollEvent(&e)){
switch(e.type){
  case SDL_QUIT:
   _done = true;break;
  case SDL_KEYDOWN:
   switch(e.key.keysym.sym){
    case SDLK_ESCAPE:
     _done = true; break;
     
    case SDLK_RETURN:
     selected = 1;
   }
}
 }
 
};

void GameEngine::draw(){
  _ctx->draw(list.at(selected));
};

void GameEngine::update(){};

GameEngine::~GameEngine(){}

}//end namespace