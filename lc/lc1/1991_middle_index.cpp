#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& n) {
        
        int size = n.size();
        vector<int> lsum(size);
        vector<int> rsum(size);

        lsum[0] = n[0];
        for(int i = 1; i < size; i++) {
            lsum[i] = lsum[i-1] + n[i];
        }

        rsum[size-1] = n[size-1];
        for(int i = size-2; i >= 0; i--) {
            rsum[i] = rsum[i+1] + n[i];
        }

        for(const auto &l: lsum) {
            cout<<l<<" ";
        }
        cout<<endl;
        for(const auto &r: rsum) {
            cout<<r<<" ";
        }

        return 1;
    }
};