#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt; 
	cin>>tt;
	while(tt--) {
	    int x, y;
	    cin>>x>>y;
	    if(y-x & 1) cout<<abs(y-x)/2 + 1<<endl;
	    else cout<<abs(y-x)/2<<endl;
	}
	return 0;
}


