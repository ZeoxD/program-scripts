#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lolo long long

int main() {
	// your code goes here
	lolo t;
	cin>>t;
	while(t--) {
	    string s; cin>>s;
	    lolo len = s.length();
	    lolo i;
	    lolo count1 = 0, count2 = 0;
	    
	    for(int i = 0; i < len; i++) {
            if(s[i] == 'a' && s[i+1] == 'b') {
                ++count1;
            }
	    }
	    
	    for(int i = 0; i < len-1; i++) {
	        if(s[i] == 'b' && s[i+1] == 'a') {
	            ++count2;
	        }
	    }
	    lolo sumval = 0;
	    if(count1 == 0 and count2 == 0) {
	        sumval = 1;
	    }
	    else {
	        sumval = pow(2,count1+count2);
	    }
	    sumval = sumval % 998244353;
	    cout<<sumval<<endl;
	}
	return 0;
}

