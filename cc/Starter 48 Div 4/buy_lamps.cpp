#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--) {
        int n, k, x, y;
        cin>>n>>k>>x>>y;
        int sm = x>y? y:x;
        cout<<(k*x) + sm * (n-k)<<endl;
    }

	return 0;
}
