#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	string s; cin>>s;
	vector<bool> v(26, false);
	for(const auto &c: s) {
		if(c>=65 and c<=90) {
			v[int(c)-65] = true;
		}
		else {
			v[int(c)-97] = true;
		}
	}
	
	for(const auto &ck: v) {
		if(ck == false) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}




