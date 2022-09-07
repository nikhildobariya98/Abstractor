#include<iostream>
using namespace std;

class Parent{
  private:
    int a;
  protected:
    int b;
  public:
    void setA(int a){
        this->a = a;
    }
    void getA(){
        cout << "The value of A:" << a << endl;
    }
};

class Child: public Parent{
  public:
    void setB(int b){
        this->b = b;
    }
    void getB(){
        cout << "The value of B:" << b << endl;
    }
};

int main(){ 
    Parent p;
    p.setA(10);
    p.getA();
    Child c;
    c.setB(10);
    c.getB();

}
