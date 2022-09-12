#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> um;
        vector<int> vtr(nums1.size(), -1);
        for(int i = 0; i < nums1.size(); i++) {
            um[nums1[i]] = i;
        }

        for(int i = 0; i < nums2.size(); i++) {
            if(!um[nums2[i]]) continue;

            for(int j = i; j < nums2.size(); j++) {
                if(nums2[j] > nums2[i]) {
                    vtr[um[nums2[i]]] = nums2[j];
                    break;
                }
            }
        }

        return vtr;
    }
};