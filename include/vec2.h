#ifndef PTG_VEC2_H
#define PTG_VEC2_H

namespace ptg{
 class Vec2{
 public:
  Vec2(float x, float y, float w, float h);
  virtual ~Vec2();
  void setX(float x);
  void setY(float y);
  float getX();
  float getY();
  float getW();
  float getH();
  void print();
  
 private:
  float _x;
  float _w;
  float _h;
  float _y;
 };
} // end namespace;
#endif