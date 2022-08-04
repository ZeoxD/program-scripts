#include <iostream>
#define equals ==
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--) {
	    int n;
	    cin>>n;
	    if(n equals 3) {
	        cout<<3<<" "<<2<<" "<<1<<endl;
	        continue;
	    }
	    cout<<n<<" "<<n-2<<" ";
	    for(int i = 1; i<n-3;i++ ) {
	        cout<<i<<" ";
	    }
	    cout<<n-3<<" "<<n-1<<endl;
	}
	return 0;
}

