#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {

        vector<int> vrr(n);
        vrr[0] = 0;

        for(int i = 1; i < n; i++) {
            vrr[i] = i;
            vrr[0] += -i;
        }      

        return vrr;
    }
};