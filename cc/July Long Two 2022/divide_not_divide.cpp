#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--) {
	    int a, b, n;
	    cin>>a>>b>>n;
	    
	    if(a%b == 0) {
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    int i;
	    if(n%a == 0) {
	        i = n/a;
	    }
	    else {
	        i = (n/a)+1;
	    }
	    
	    i = a*i;
	    int number;
	    int flag = false;
	    for(; i < INT32_MAX; i=i+a) {
	        if(i%b != 0) {
	            number = i;
	            flag = true;
	            break;
	        }
	    }
	    if(flag) {
	        cout<<number<<endl;
	        continue;
	    }
	    
	    cout<<-1<<endl; 
	    
	    
	}
	
	return 0;
}

