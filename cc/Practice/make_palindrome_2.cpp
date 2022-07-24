#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int zero = 0;
	    int ones = 0;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == 0) {
	            ++zero;
	        }
	        else {
	            ++ones;
	        }
	    }
	    
	    int allowed = n/2;
	    
	    
	    
	}
	
	return 0;
}
