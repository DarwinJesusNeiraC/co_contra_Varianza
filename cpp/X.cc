
#include <iostream>
#include "A.h"
#include "B.h"
class X{
  public:
    virtual A foo(B a){
      printf("foo X, retorna A , recibe B\n");
      return a;
    }
};
