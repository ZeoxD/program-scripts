#include<iostream>
using namespace std;

int main() {
	int n, l;
	cin>>n>>l;
	string s;
	cin>>s;
	while(l--) {
		for(int i=0; i < n-1; i++) {
			if(s[i] == 'B' && s[i+1] == 'G') {
				char temp = s[i];
				s[i] = s[i+1];
				s[i+1] = temp;
				++i;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
