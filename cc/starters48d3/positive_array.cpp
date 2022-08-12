#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here

    int t; 
    cin>>t;
    while(t--) {
        unordered_map<int, int> um;
        int N;
        cin>>N;
        vector<int> va(N);
        for(int i = 0; i < N; i++) {
            cin>>va[i];
        }

        for(const auto &v: va) {
            um[v]++;
        }
        int largest = 0;
        int val_at_large = 0;
        for(auto it = um.begin(); it != um.end(); it++) {
            if(largest < va[it->first]) {
                largest = va[it->first];
                val_at_large = it->first;
            }
        }

        while(um[val_at_large] == 0){
            for(auto it = um.begin(); it != um.end(); it++) {
                
            }
        }

    }

	return 0;
}
