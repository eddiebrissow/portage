#include "vec2.h"

namespace ptg{
Vec2::Vec2(float x, float y, float w, float h):_x(x),_y(y), _w(w), _h(h){};

Vec2::~Vec2(){};

float Vec2::getX(){
 return _x;
}

float Vec2::getY(){
 return _y;
}

void Vec2::setX(float x){
 _x = x;
}


float Vec2::getH()
{
 return _h;
}

float Vec2::getW()
{
 return _w;
}


void Vec2::setY(float y){
 _y = y;
}

void Vec2::print(){
 //TODO print
}





} // end namespace