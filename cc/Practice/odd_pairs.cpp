#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    long n; cin>>n;
	    if(n==1) {
	        cout<<0<<endl;
	        continue;
	    }
	    n=n*n; n=n/2;
	    cout<<n<<endl;
	}
	return 0;
}

