#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int op = 0;
        int size = nums.size();

        for(int i = 1; i < size; i++) {
            if(nums[i-1] >= nums[i]) {
                op += (nums[i-1]+1) - nums[i];
                nums[i] = nums[i-1]+1;
            }
        }

        return op;
    }
};