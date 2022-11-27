/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

public class Main {
  public static void main(String[] args) {
    A a = new A() {
       public void ave(){
        System.out.println("ave a");
      }
    };
    B b = new B() {
       public void ave(){
        System.out.println("ave b");
      }
      public void bala(){
        System.out.println("bala b");
      }     
    };
    C c = new C() {
      public void ave(){
        System.out.println("ave c");
      }
      public void bala(){
        System.out.println("bala c");
      }     
      public void casa(){
        System.out.println("bala c");
      }     
    };

    X x = new X();
    x.foo(b);
    Y y = new Y();
    y.foo(a);
  }
}

