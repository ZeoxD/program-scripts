#include <bits/stdc++.h>
using namespace std;

#define MAX(a, b) a = max(a, b) 
#define MIN(a, b) a = min(a, b) 
#define tab "\t"

int main() {
    
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k = k*l;
    c = c*d;
    k = k/nl;
    c = c/1;
    p = p/np;
    MIN(k,c);
    MIN(k,p);
    k = k/n;
    cout<<k;

}