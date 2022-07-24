#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--) {
	    int n, k;
	    cin>>n>>k;
	    vector<int> vtr(n);
	    for(int i = 0; i < n; i++) {
	        cin>>vtr[i];
	    }
	    
	    for(int i = 0; i < n; i++) {
	        if(k - vtr[i] >= 0) {
	            k = k - vtr[i];
	            cout<<1;
	        }
	        else {
	            cout<<0;
	        }
	    }
	    cout<<endl;
	}
	
	return 0;
}
