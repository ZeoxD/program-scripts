#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> vtr;

        for(int i = 0; i < nums.size(); i++) {
            vtr.insert(vtr.begin() + index[i], nums[i]);
        }

        return vtr;
    }
};