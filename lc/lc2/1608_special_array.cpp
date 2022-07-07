#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());

        int x = 0;
        if(x == 0 && size == 0) {
            return 0;
        }

        for(x = 1; x <= size; x++) {
            int i = 0;
            while(nums[i] < x && i < size-1) {
                ++i;
            }
            if(nums[i] < x) {
                ++i;
            }

            if(size - i == x) {
                return x;
            }
        }

        return -1;

    }
};

