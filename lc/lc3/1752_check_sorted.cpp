#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int c = 0;

        for(int i = 0; i < size; i++) {
            if(nums[i] > nums[(i+1)%size]) {
                ++c;
            }
        }

        if(c>1) {
            return false;
        }

        return true;
    }
};