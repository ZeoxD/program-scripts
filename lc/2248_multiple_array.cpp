#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> um;
        const int SIZE = nums.size();

        for(auto num: nums) {
            for(auto n: num) {
                um[n]++;
            }
        }

        vector<int> res;

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second == SIZE) {
                res.push_back(it->first);
            }
        }

        sort(res.begin(), res.end());

        return res;
    }
};