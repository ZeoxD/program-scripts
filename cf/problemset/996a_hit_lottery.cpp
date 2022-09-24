#include<bits/stdc++.h>
using namespace std;
int main() {
	int m; cin>>m;
	int count = 0;
	while(m) {
		if(m/100) {
			count += m/100;
			m = m%100;
		}
		else if(m/20) {
			count += m/20;
			m = m%20;
		}
		else if(m/10) {
			count += m/10;
			m = m%10;
		}
		else if(m/5) {
			count += m/5;
			m = m%5;
		}
		else if(m/1) {
			count += m/1;
			m = m%1;
		}
		
	}
	cout<<count<<endl;
	return 0;
}
