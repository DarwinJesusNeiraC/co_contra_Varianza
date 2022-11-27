/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

public class Y extends X {
  int y = 1;

  @Override
  public A foo(B a) {
    System.out.format("Y::foo(B) retorna B %d\n", y);
    return a;
  }
}

