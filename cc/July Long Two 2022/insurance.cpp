#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--) {
	    int x, y;
	    cin>>x>>y;
	    
	    if(x >= y) {
	        cout<<y<<endl;
	    }
	    else {
	        cout<<x<<endl;
	    }
	}
	
	return 0;
}
