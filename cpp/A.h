#ifndef A_H
#define A_H
#include<stdio.h>
class A{
  int x;
  public:
  A(): x(0){}
  void ave(){
    printf("A::ave() %d \n", x);
  }
};
#endif
