#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> num; num = nums;
        sort(nums.begin() , nums.end());
        int idx = nums[nums.size()-1] >= 2*nums[nums.size()-2] ? nums[nums.size()-1] : -1;
        if(idx==-1) return -1;
        for(int i=0; i<num.size(); i++) {
            if(idx == num[i]) return i;
        }
        return -1;
    }
};