/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

public class Main {
  public static void main(String[] args) {
    X x = new X();
    x.foo(new B() {
      public void ave(){
        System.out.println("ave");
      }
      public void bala(){
        System.out.println("bala");
      }     
    });
    Y y = new Y();
    y.foo(new B() {
      public void ave(){
        System.out.println("ave");
      }
      public void bala(){
        System.out.println("bala");
      }     
    });
  }
 
}

