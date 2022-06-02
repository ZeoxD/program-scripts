#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> um1;
        unordered_map<int, bool> um2;

        for(auto n1: nums1) {
            um1[n1] = true;
        }

        for(auto n2: nums2) {
            um2[n2] = true;
        }

        vector<int> vtr;
        for(auto it = um1.begin();it !=um1.end(); it++) {
            if(it->second == um2[it->first]) {
                vtr.push_back(it->first);
            }
        }

        return vtr;
    }
};