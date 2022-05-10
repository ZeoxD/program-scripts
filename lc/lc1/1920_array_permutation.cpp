#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i;
        int count = nums.size();
        vector<int> numv(count);

        for (i = 0; i < count; i++)
        {
            numv[i] = nums[nums[i]];
        }
                
        return numv;
    }
};
