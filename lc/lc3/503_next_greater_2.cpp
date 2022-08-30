#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int sz = nums.size();
        vector<int> vtr(sz, -1);

        for(int i = 0; i < sz; i++) {
            int j = i+1;
            while( j%sz != i) {
                if(nums[j%sz] > nums[i]) {
                    vtr[i] = nums[j%sz];
                    break;
                }
                ++j;
            }
        }
        return vtr;
    }
};