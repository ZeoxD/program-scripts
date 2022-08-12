#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int tt; cin>>tt;
	while(tt--) {
	    long long ll = 0;
	    long long out = 0;
	    int n, x, y;
	    cin>>n>>x>>y;
	    vector<long long> vtr(n);
	    for(int i = 0; i < n; i++) {
	        cin>>vtr[i];
	    }
	    if( x<= y) {
	        long long val = INT16_MIN;
	        for(auto v: vtr) {
	            if(val < v) val = v;
	        }
	        if(val <= 0) cout<<0<<endl;
	        else cout<<(val+y-1)/y<<endl;
	    }
	    else {
	        for(int i = 0; i < n; i++) vtr[i] = max(vtr[i], 0ll);
	        for(int i = n-1; i>=0;i--) {
	            vtr[i] = vtr[i] - ll;
	            vtr[i] = max(vtr[i] , 0ll);
		    
	            long long newval = (vtr[i] + x -1) / x;
	            ll += y*newval;
	            out += newval;
	        }
	        cout<<out<<endl;
	    }
	}	
	return 0;
}

