#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n, b;
	    cin>>n>>b;
	    vector<vector<int>> arr(n, vector<int>(3));
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < 3; j++) {
	            cin>>arr[i][j];
	        }
	    }
	    long maxv = 0; long screen = 0;
	    for(int i = 0; i < n; i++) {
	        if(arr[i][2] <= b) {
	            maxv = arr[i][0] * arr[i][1];
	            screen = max(screen, maxv);
	        }
	    }
	    if(!screen) {
	        cout<<"no tablet"<<endl;
	        continue;
	    }
	    cout<<screen<<endl;
	}
	return 0;
}

