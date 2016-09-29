#ifndef PTG_DISPLAY_FILE_H
#define PTG_DISPLAY_FILE_H

#include "game_entity.h"
#include <vector>



namespace ptg{
 class DisplayFile{
 public:
  DisplayFile(int layers);
  virtual ~DisplayFile();
  void add(GameEntity entity, int layer);
  GameEntity get(int idx, int layer);
  int size(int layer);
  int layerSize();
 private:
  std::vector<GameEntity>  *_layers;
  int _layersSize;
  
 };
}//end namespace

#endif