#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--) {
	    int n;
	    cin>>n;
	    vector<int> vtr(n);
	    vector<int> cpy(n);
	    for(int i = 0; i < n; i++) cin>>vtr[i];
	    for(int i = 0; i < n; i++) cpy[i] = vtr[i];
	    sort(vtr.begin(), vtr.end());
	   
	    vector<int> a;
	    vector<int> b;
	    int iter = 0;
	    for(int i = 0; i < n; i++) {
	        if(cpy[i] == vtr[iter]) {
	            a.push_back(cpy[i]);
	            ++iter;
	        }
	        else {
	            b.push_back(cpy[i]);
	        }
	    }
	    
	    if(is_sorted(b.begin(), b.end())) {
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}

