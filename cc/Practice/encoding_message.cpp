#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    for(int i = 0; i < n-1; i=i+2) {
	        char t = s[i];
	        s[i] = s[i+1];
	        s[i+1] = t;
	    }
	    for(int i = 0; i < n; i++) {
	        s[i] = (122 - s[i]) + 97;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
