#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        
        int sum = 0, max = INT_MIN;
        for(int i = 0; i < size; i++) {

            if(sum < 0) {
                sum = 0;
            }
            sum += nums[i];
            
            if(sum > max) {
                max = sum;
            }
        }

        return max;
    }
};