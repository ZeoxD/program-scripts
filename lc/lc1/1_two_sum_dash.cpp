#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        bool terminate = false;

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(nums[i] + nums[j] == target && i!=j) {
                    ans.push_back(i);
                    ans.push_back(j);
                    terminate = true;
                    
                }
            }
            if(terminate) {
                break;
            }
        }


        return ans;
    }
};