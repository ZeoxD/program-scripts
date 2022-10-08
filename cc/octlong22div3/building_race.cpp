#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int a, b, x, y;
	    cin>>a>>b>>x>>y;
	    if(a*y < b*x) {
	        cout<<"Chef"<<endl;
	    }
	    else if(a*y > b*x) {
	        cout<<"Chefina"<<endl;
	    }
	    else {
	        cout<<"Both"<<endl;
	    }
	}
	return 0;
}
