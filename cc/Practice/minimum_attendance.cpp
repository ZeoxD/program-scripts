#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    int c = 0;
	    for(int i = 0; i < n; i++) if(s[i] == '1') ++c;
	    if((c + (120-n)) < 90) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}

