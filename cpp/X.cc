
#include <iostream>
#include "A.h"
#include "B.h"
class X{
  public:
    virtual A foo(A a){
      printf("foo X, retorna A , recibe B\n");
      return a;
    }
};
