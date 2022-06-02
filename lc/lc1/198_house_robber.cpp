#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();

        for(int i = 2, j = 3; i<size && j<size; i = i + 2, j = j + 2) {
            nums[0] += nums[i];
            nums[1] += nums[j];
        }

        return max(nums[0], nums[1]);
    }
};
