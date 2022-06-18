#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int pro = 1;
        int npro = 1;
        int size = nums.size();

        for(int i = size-1; i > size-1-3; i--) {
            pro = pro * nums[i];
        }
        for(int i = 0; i < 2; i++) {
            npro = npro * nums[i];
        }
        npro = npro * nums[size-1];

        return max(pro, npro);
    }

};