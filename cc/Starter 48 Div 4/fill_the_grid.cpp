#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        int sm = n>m?m:n;
        if(n % 2 == 0 && m % 2 == 0) {
            cout<<0<<endl;
            continue;
        }
        if(n % 2 != 0 && m % 2 != 0) {
            cout<<n+m-1<<endl;
            continue;
        }

        if(n%2 != 0) cout<<m<<endl;
        else cout<<n<<endl;
    }

	return 0;
}
