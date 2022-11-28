#ifndef C_H
#define C_H
# include <stdio.h>
#include "B.h"
class C: public B {
  public:
    void ave(){
      printf("C::ave()\n");
    }
    void bala(){
      printf("C::bala()\n");
    }
    void casa() {
      printf("C::casa()\n");
    }
};
#endif
