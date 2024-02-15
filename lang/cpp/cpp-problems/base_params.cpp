// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class base{
 private:
  int value;
  
 public:
  base(int x){
   value=x;
   cout<<"value"<<value;
  }
  virtual void fun() {}
};

class derived: public base{
 private:
  int y;
 public:
  derived(int x, int y):base(x){
   base *b;
   b = this;
   b->fun();
  }
  void fun(){
   cout<<"fun inside derived class"<<endl;
  }
};


int main() {
    derived d(2,6);

    return 0;
}
