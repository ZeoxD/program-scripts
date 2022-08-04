#include<iostream>
#include<string>

using namespace std;

int main() {
	string s, t;
	cin>>s>>t;
	int slen = s.length();
	int tlen = t.length();
	bool flag = false;
	if( slen == tlen) {
		for(int i = 0, j = tlen-1; i<slen && j>-1; i++, j--) {
			if(s[i] != t[j]) {
				flag = true;
				break;
			}
		}
	}
	else flag = true;

	if(flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	
	return 0;
}
