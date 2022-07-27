#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	vector<int> vtr(n);
	for(int i = 0; i < n; i++) cin>>vtr[i];
	int c = 0; int val = vtr[k-1];
	if(!val) ++val;
	for(int i = 0; i < n; i++) if(vtr[i] >= val) ++c;
	cout<<c<<endl;
	return 0;
}
