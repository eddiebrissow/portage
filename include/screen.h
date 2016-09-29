#ifndef PTG_SCREEN_H
#define PTG_SCREEN_H
#include "display_file.h"
namespace ptg{
 class Screen : public DisplayFile{
 public:
  Screen(){};
  virtual ~Screen(){};
  virtual void setAction(int action);
 
 };
}
#endif