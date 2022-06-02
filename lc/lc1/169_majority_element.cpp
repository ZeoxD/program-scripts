#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;

        for(auto n: nums) {
            um[n]++;
        }

        int max = 0, max_ele = 0;
        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second > max) {
                max = it->second;
                max_ele = it->first;
            }
        }

        return max_ele;
    }
};