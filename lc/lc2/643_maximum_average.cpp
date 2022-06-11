#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0.0f;
        double sum = 0.0f;
        int size = nums.size();

        for(int i = 0; i < size-k; i++) {
            sum = 0;
            for(int j = i; j < k; j++) {
                sum += nums[i+j];
            }
            ans = max(ans, double(sum/(k)));
        }

        return ans;
    }
};