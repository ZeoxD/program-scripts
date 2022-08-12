#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--) {
	    int x; cin>>x; bool flag = false;
	    for(int a = 1; a*a <= x; a++) {
	        if(!( (x-(2*a))%(2+a) ) && (x-(2*a))/(2+a) > 0 ) {
	                cout<<"YES"<<endl;
	                flag = true;
	                break;
	        }
	    }
	    if(flag) continue;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
