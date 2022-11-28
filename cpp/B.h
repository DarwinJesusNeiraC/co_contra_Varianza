#ifndef B_H
#define B_H
#include<stdio.h>
#include "A.h"
class B: public A{
  int y;
  public:
  B():y(1){}
  void ave(){
    printf("B::ave()\n");
  }
  void bala(){
    printf("B::bala() %d \n", y);
  }
};
#endif
