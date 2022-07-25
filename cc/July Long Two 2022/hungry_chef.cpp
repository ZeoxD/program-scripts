#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int tt; 
	cin>>tt;
	while(tt--) {

	    
	    int x, y, n, r;
	    cin>>x>>y>>n>>r;
	    
	    if((x*n) > r) {
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    int b = (r - (n*x)) / (y - x);
	    if(b > n) {
	        b = n;
	    }
	    int a = n - b;
	    
	    cout<<a<<" "<<b<<endl;
	    
	}
	
	return 0;
}
