#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        
        int ret = -1;

        for(int i = 0; i<nums.size(); i++) {
            if(i%10 == nums[i]) {
                ret = i;
                break;
            }
        }

        return ret;

    }
};