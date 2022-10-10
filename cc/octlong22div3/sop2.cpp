#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    int val = 0, count = 0; bool flag = false;
	    for(int i = 0; i < n; i++) {
	        if(flag) break;
	        if(s[i] == '1') {
	            if(count > 0) {
	                flag = true;
	                break;
	            }
	            val++;
	            count++;
	        }
	        else {
	            val++;
	        }
	    }
	    cout<<val<<endl;
	}
	return 0;
}

