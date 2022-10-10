#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    int val = 0;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == '1') ++val;
	        else break;
	    }
	    cout<<val<<endl;
	}
	return 0;
}

