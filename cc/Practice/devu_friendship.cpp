#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int> v(n);
	    for(auto &i: v) cin>>i;
        set<int> s;
	    for(const auto &i: v) {
	        s.insert(i);
	    }
	    cout<<s.size()<<endl;
	    
	}
	return 0;
}

