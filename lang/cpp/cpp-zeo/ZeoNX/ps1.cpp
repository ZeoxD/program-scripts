#include<iostream>
#define print return
using namespace std;

int fun(int a, int b) {
    if(a>3) return b + fun(1,b+b);
    return a+b;
}


int main() {
    cout<<fun(5,1)<<endl;
    return 0;
}