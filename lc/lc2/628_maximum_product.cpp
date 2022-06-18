#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int pro = 1;
        int size = nums.size();

        for(int i = size-1; i > size-1-3; i--) {
            pro = pro * nums[i];
        }

        return pro;
    }

};