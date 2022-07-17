#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size = nums.size();
        vector<int> vtr;

        for(int i = 0; i < size; i = i+2) {
            while(nums[i]--) {
                vtr.push_back(nums[i+1]);
            }
        }

        return vtr;
    }
};