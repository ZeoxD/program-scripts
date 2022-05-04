#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map<int, int> um;

        for(auto &n: nums) {
            um[n]++;
        }

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};
