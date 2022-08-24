#include<bits/stdc++.h>
using namespace std;
int main() {
	string s, t;
	cin>>s>>t;
	string n;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == t[i]) n += '0';
		else n+= '1';
	}
	cout<<n<<endl;
	return 0;
}
