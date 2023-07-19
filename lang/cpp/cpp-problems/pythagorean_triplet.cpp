#include <iostream>
using namespace std;
int main() {
    int a, b, c; cin>>a>>b>>c;
    int x = a>b?b:a;
    int mx = a>b?a:b;
    int y = mx>c?c:mx;
    mx = mx>c?mx:c;
    if(x*x + y*y == mx*mx) cout<<"It's a triplet"<<endl;
    else cout<<"It's not a triplet"<<endl;
    return 0;
}
