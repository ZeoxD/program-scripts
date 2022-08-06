#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, h;
	cin>>n>>h;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin>>v[i];
	int count = 0;
	for(auto vi: v) {
		if(vi > h) {
			++count;
		}
	}
	cout<<n+count<<endl;
	return 0;
}
