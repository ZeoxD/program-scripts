#include<iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	string s;
	cin>>s;
	set<char> st;
	for(auto c: s) {
		st.insert(c);
	}
	if(st.size()%2) cout<<"IGNORE HIM!"<<endl;
	else cout<<"CHAT WITH HER!"<<endl;
}
	
