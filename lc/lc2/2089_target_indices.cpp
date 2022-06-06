#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> vtr;
        int size = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < size; i++) {
            if(nums[i] == target) {
                vtr.push_back(i);
            }
        }

        return vtr;
    }
};