#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int bval = 0;
	int n;
	cin>>n;
	vector<string> vs(n);
	for(int i = 0; i < n; i++) cin>>vs[i];
	for(int i = 0; i < n; i++) {
		if(vs[i][1] == '+') ++bval;
		else --bval;
	}
	cout<<bval<<endl;
	return 0;
}
