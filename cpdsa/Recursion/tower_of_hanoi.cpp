#include<iostream>
using namespace std;

void print(int s, int e) {
    cout<<s<<" -> "<<e<<endl;
}

void tower(int n, int s, int e) {
    if(n == 1) print(s,e);
    else {
        int o = 6 - (s+e);
        tower(n-1, s, o);
        print(s,e);
        tower(n-1, o, e);
    }
}

int main() {
    tower(5, 1, 3);
    return 0;
}
