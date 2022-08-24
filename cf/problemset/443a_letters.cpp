#include<bits/stdc++.h>
using namespace std;
int main() {
	string str; getline(cin, str);
	unordered_map<char, bool> um;
	for(const auto &c: str) if(c>=97 and c<=122) um[c] = true;
	cout<<um.size()<<endl;
	return 0;
}
