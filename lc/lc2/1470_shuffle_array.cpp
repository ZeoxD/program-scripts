#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = nums.size();

        int piv = size/2;
        vector<int> newnums(size);

        for(int i = 0; i < size/2; i++) {
            newnums[2*i] = nums[i];
            newnums[2*i+1] = nums[piv];

            ++piv;
        }

        return newnums;

    }
};