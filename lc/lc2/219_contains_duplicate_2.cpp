#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        unordered_map<int, int> vc;

        int size = nums.size();

        for(int i = 0; i < size; i++) {
            um[nums[i]] = i - um[nums[i]];
            vc[nums[i]]++;
            if(um[nums[i]] <=k && vc[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};
