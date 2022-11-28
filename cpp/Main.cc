
# include "A.h"
# include "B.h"
# include "C.h"
# include "Y.cc"

void test(A &);

int main() {

  A a;
  B b;
  C c;
  X *x = new X();
  Y *y = new Y();

  x->foo(a);
  y->foo(b);

}


