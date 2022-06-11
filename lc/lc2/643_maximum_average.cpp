#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long sum = 0, ans = 0;
        int size = nums.size();

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        ans = sum;

        for(int i = 1; i<size-k + 1; i++) {
            sum += nums[k+(i-1)] - nums[i-1];
            ans = max(ans, sum);
        }


        return ans/(k*1.0);
    }
};