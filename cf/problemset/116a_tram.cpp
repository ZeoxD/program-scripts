#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n; cin>>n;
	vector<vector<int>> v(n, vector<int>(2));
	for(int i = 0; i < n; i++) for(int j = 0; j < 2; j++) cin>>v[i][j];
	int val = 0; int maxv = 0;
	for(int i=0;i<n;i++) {
	val -= v[i][0];
	val += v[i][1];
	maxv = max(maxv, val);
	}
	cout<<maxv<<endl;

	return 0;
}
