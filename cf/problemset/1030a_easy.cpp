#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	bool flag = false;
	int val;
	for(int i = 0;i < n; i++) {
		cin>>val;
		if(val == 1) flag = true;	 

	}
	if(flag) cout<<"HARD"<<endl;
	else cout<<"EASY"<<endl;
	return 0;
}
