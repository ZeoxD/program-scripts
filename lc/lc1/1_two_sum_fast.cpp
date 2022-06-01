#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashset;
        int size = nums.size();
        vector<int> vtr;

        for(int i = 0; i < size; i++) {
            int search = target - nums[i];

            if(hashset.find(search) != hashset.end()) {
                vtr.push_back(hashset[search]);
                vtr.push_back(i);
            }

            hashset[nums[i]] = i;
        }

        return vtr;

    }
};