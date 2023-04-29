#include<iostream>
#define print return
using namespace std;

int fun(int p, int q, int r) {
    p = 3; q = 2; r = 6;
    for(r = 4; r<=7; r++) {
        if((p+6) > (q-p)) {
            continue;
        }
        p = (p+q) & r;
        p = q^r;
    }
    return p+q;
}

int main() {
    cout<<fun(0,0,0)<<endl;
    return 0;
}