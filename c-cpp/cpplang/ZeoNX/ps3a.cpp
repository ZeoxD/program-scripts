#include<iostream>
#define print return
using namespace std;

int fun(int a, int b, int c) {
    a = 7; b = 4; c = 8;
    if(5>a || (c-b) > (b+c)) {
        a = (c^7) + c;
    }
    if((b+c) < (c-b)) {
        b = (10+3) + c;
    }
    return a+b+c;
}

int main() {
    cout<<fun(0,0,0)<<endl;
    return 0;
}
