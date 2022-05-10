#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        int len = nums.size();
        int j = len - 1;
        int i = 0;

        while(i <= len/2 && i != j) {
            if(nums[i] + nums[j] > target) {
                j--;
            }
            if(nums[i] + nums[j] < target) {
                i++;
            }
            if(nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }

        return res;
    }
};