#include "game_panel.h"

namespace ptg{
GamePanel::GamePanel(){}

GamePanel::~GamePanel(){}

int GamePanel::loadImage(SDL_Renderer & render,char* path){
 return _imageKeeper.loadImage(render, path);
}

void GamePanel::paint(SDL_Renderer& renderer){
 SDL_Rect darea, rect;
 SDL_RenderGetViewport(&renderer, &darea);
  for(int j=0; j< _df->layerSize(); j++){
 for(int i=0; i< _df->size(j); i++){
SDL_Texture *img = _imageKeeper.getImage(_df->get(i, j).getImage());
//    im = SDL_CreateTextureFromSurface(&renderer, img);
  rect.w = _df->get(i, j).getPosition().getW()>0?
  _df->get(i, j).getPosition().getW(): darea.w;
  rect.h = _df->get(i, j).getPosition().getH()>0?
  _df->get(i, j).getPosition().getH():darea.h;
  rect.x = _df->get(i, j).getPosition().getX();
  rect.y = _df->get(i, j).getPosition().getY();
//   SDL_blit(img, &rect, &renderer, &darea);
  SDL_RenderCopy(&renderer, img, NULL, &rect);
 
  }
 }
 
 
}



void GamePanel::setDisplayFile(DisplayFile* dp){
 _df = dp;
}
 
 
}//end namespace