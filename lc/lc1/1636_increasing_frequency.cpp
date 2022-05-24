#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> um;
        priority_queue<pair<int, int>> pq;

        for(auto n: nums) {
            um[n]++;
        }

        for(auto &u: um) {
            pq.push({u.second, u.first});
        }

        nums = {};

        while(!pq.empty()) {
            for(int i = 0; i < pq.top().first; i++) {
                nums.push_back(pq.top().second);
            }

            pq.pop();
        }

        reverse(nums.begin(), nums.end());

        return nums;
        
    }
};