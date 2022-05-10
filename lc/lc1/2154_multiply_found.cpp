#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(nums.begin(), nums.end());

        for(auto &n: nums) {
            if( n == original) {
                original = original * 2;
 
            }               
        }
        return original;
    }
};