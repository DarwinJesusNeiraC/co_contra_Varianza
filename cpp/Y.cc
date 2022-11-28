
#include <iostream>
#include "A.h"
#include "B.h"
#include "X.cc"

class Y :public X{
  public:
    virtual B foo(B b){
      printf("foo Y, retorna A , recibe B\n");
      return b;
    }
};
