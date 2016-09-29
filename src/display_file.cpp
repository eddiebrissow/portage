#include "display_file.h"

namespace ptg {
 
DisplayFile::DisplayFile(int layers){
  _layers = new std::vector<GameEntity>[layers];
  _layersSize = layers;
 
}

void DisplayFile::add(GameEntity entity, int layer){
_layers[layer].push_back(entity);
 
};

GameEntity DisplayFile::get(int idx, int layer){
return _layers[layer].at(idx);
};

int DisplayFile::size(int layer){
 return _layers[layer].size();
};

int DisplayFile::layerSize(){
   return _layersSize; 
};

DisplayFile::~DisplayFile(){
 delete[] _layers;
};
}//end namespace