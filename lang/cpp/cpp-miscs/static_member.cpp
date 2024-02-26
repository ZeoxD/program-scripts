#include <iostream>
using namespace std;

class A {
    static int a;
  public: 
    int static fun() {
        cout<<"Hello"<<endl;
        return a;
    }
};

int A::a = 10;

int main() {
    cout<<A::fun()<<endl;
    
    return 0;
}
