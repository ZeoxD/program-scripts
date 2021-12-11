/* this is a program for learning */

// #include<stdio.h>
// #define ii int

// ii a = 5; /* global variable*/

// int main(){
//     ii b;
//     scanf("%d" , &b);

//     printf("The value you entered multiplied by global variable is %d", a*b);

//     hello();
// }

// int hello(){
//     printf("hello global value is %d", a);
// }

#include<iostream>
using namespace std;
#define nl "\n"

class CallData {
    private: 
        int x, *y;
    
    public:
        CallData(){
            x = 5;
            *y = 7;
        }
        void callval();
        void callref();
        void display();
};

void CallData :: callval() {
    x = x * x;
}

void CallData :: callref(){
    *y = *y * *y;
}

void CallData:: display(){
    cout<<x<<nl<<*y;
}

int main(){

    CallData callobj;
    callobj.callval();
    callobj.callref();
    callobj.display();
    
    return 0;
}