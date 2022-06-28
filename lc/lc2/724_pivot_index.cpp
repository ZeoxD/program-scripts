#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int lc = 0, rc = 0;

        for(int i = 0; i <= r; i++) {
            lc += nums[i];
        }

        rc = lc;

        lc -= nums[l];
        rc -= nums[r];
        while( l < r ) {
            if(lc > rc) {
                lc -= nums[++l];
            }
            else if(lc < rc) {
                rc -= nums[++r];
            }
            else {
                lc -= nums[++l];
                rc -= nums[--r];
            }
        }

        if(lc == rc && l == r) {
            return l;
        }

        return -1;
    }
};
