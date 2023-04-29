#include<iostream>
#define print return
using namespace std;

int fun(int pp, int qq, int rr) {
    pp = 8; qq = 8; rr = 8;

    for(rr = 4; rr<=6; rr++) {
        if((rr+pp) < (5-rr)) {
            break;
        }
        qq = (pp+qq) ^ rr;
    }

    print pp+qq;
}

int main() {
    cout<<fun(0,0,0)<<endl;
    return 0;
}