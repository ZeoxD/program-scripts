#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n, k;
	    cin>>n>>k;
	    vector<int> vtr(n);
	    for(int i=0; i<n; i++) cin>>vtr[i];
	    int idx, carry = 0, protein = 0;
	    bool flag = false;
	    for(int i = 0; i < n; i++) {
	        protein = carry + vtr[i];
	        if(protein < k) {
	            idx = i;
	            flag = true;
	            break;
	        }
	        carry = protein - k;
	    }
	    
	    if(flag) cout<<"NO"<<" "<<idx+1<<endl;
	    else cout<<"YES"<<endl;
	    
	}
	return 0;
}

