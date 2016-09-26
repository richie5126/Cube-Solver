#ifndef CUBE_H_
#define CUBE_H_
#include <iostream>

class CubeTwoByTwo
{
   private:
   char cube[6][2][2];
   public:
   
   CubeTwoByTwo();
   void rotateF(bool is_clockwise);
   void rotateB(bool is_clockwise);
   void rotateU(bool is_clockwise);
   void rotateD(bool is_clockwise);
   void rotateL(bool is_clockwise);
   void rotateR(bool is_clockwise);
};
#endif
