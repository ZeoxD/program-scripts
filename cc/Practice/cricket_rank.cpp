#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; 
	while(t--) {
	    int r, w, c;
	    cin>>r>>w>>c;
	    int R, W, C;
	    cin>>R>>W>>C;
	    int a = 0, b = 0;
	    if(r>R) ++a;
	    else ++b;
	    if(w>W) ++a;
	    else ++b;
	    if(c>C) ++a;
	    else ++b;
	    if(a>b) cout<<"A"<<endl;
	    else cout<<"B"<<endl;
	}
	return 0;
}

