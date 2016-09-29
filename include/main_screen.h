#ifndef PTG_MAIN_SCREEN_H
#define PTG_MAIN_SCREEN_H
#include "screen.h"
namespace ptg{
 class MainScreen : public Screen{
  
MainScreen();
virtual ~MainScreen();
void setAction(int action);
void setBackground();
void addLayer(char * path);


 } ;
}
#endif