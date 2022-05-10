#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> um;

        for(auto n1: nums1) {
            um[n1] = 1;
        }
        for(auto n2: nums2) {
            um[n2] = 2;
        }
        for(auto n3: nums3) {
            um[n3] = 3;
        }

        vector<int> vtr;

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second >= 2) {
                vtr.push_back(it->first);
            }
        }      

        return vtr;
    }
};