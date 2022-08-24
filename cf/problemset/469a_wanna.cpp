#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	int p; cin>>p;
	vector<int> arrp(p);
	for(int i = 0;i < p; i++) cin>>arrp[i];
	int q; cin>>q;
	vector<int> arrq(q);
	for(int i= 0; i < q; i++) cin>>arrq[i];
	vector<bool> map(n+1, false);
	for(auto p: arrp) map[p] = true;
	for(auto q: arrq) map[q] = true;
	for(int i = 1; i<n+1; i++) {
		if(map[i] == false) {
			cout<<"Oh, my keyboard!";
			return 0;		
		}	
	}

	cout<<"I become the guy.";

	return 0;
}
