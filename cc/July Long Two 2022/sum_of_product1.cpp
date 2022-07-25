#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int tt; 
	cin>>tt;
	while(tt--) {
	    long n;
	    cin>>n;
	    vector<int> vtr(n);
	    
	    for(int i = 0; i < n; i++) {
	        cin>>vtr[i];
	    }
	    
	    vector<long> perm; 
	    long long count = 0;
	    for(int i = 0; i < n; i++) {
	        if(vtr[i] == 1) {
	            ++count;
	        }
	        else {
	            perm.push_back(count);
	            count = 0;
	        }
	    }
	    
	    if(count) {
	        perm.push_back(count);
	    }
	    count = 0;
	    
	    for(int i = 0; i < perm.size(); i++) {
	        count += ( perm[i] * (perm[i]+1) ) / 2;
	    }
	    
	    cout<<count<<endl;
	    
	}
	
	return 0;
}
