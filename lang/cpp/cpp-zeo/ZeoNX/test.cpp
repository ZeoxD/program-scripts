#include<bits/stdc++.h>
using namespace std;

int RoundOff(int n);

int main() {
    cout<<RoundOff(78);
    return 0;
}

int RoundOff(int n) {
    if(n%10 == 0) return n;
    if(n%10 <= 4) return n - (n%10);
    else if(n%10 >=5) return n + (10-(n%10));

    return -1;
}