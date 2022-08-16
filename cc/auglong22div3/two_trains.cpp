#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n; n = n-1;
	    vector<int> v(n);
	    for(int i = 0; i < n; i++) cin>>v[i];
	    int maxv = 0, sum = 0;
	    for(int i = 0; i < n; i++) {
	        if(maxv < v[i]) maxv = v[i];
	        sum += v[i];
	    }
	    cout<<sum+maxv<<endl;
	}
	return 0;
}   
