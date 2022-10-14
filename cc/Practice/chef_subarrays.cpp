#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int> v(n);
	    for(auto &i: v) cin>>i;
	    int sum = 0, pro = 1;
	    int count = 0;
	    for(int i = 0; i < n; i++) {
	        for(int j = i; j < n; j++) {
	            sum += v[j]; pro *= v[j];
	            if(sum == pro) {
	                ++count;
	            }
	        }
	        sum = 0; pro = 1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

