#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<string> vs(n);
	for(int i = 0; i < n; i++) cin>>vs[i];
	int mc = 0;
	for(int i = 0; i < n-1; i++) {
		if(vs[i] == "10" && vs[i+1] == "01") ++mc;
		else if(vs[i] == "01" && vs[i+1] == "10") ++mc;
	}
	cout<<mc+1<<endl;
	return 0;
}
