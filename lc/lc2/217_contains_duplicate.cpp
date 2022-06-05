#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> um;

        for(auto n: nums) {
            um[n]++;
        }

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second > 1) {
                return true;
            }
        }

        return false;
    }


};