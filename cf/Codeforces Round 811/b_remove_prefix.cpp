#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];
		set<int> st;
		for(int i=0; i<n; i++) st.insert(v[i]);
		
		cout<<v.size()-st.size()<<endl;
	}

	return 0;
}	

