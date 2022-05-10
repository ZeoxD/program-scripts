#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> newnums;
        int count = 0;
        
        newnums[0] = nums[0];

        for(int i = 1; i<nums.size(); i++) {
            if(nums[i]>nums[i-1]) {

                newnums.push_back(nums[i]);
                count++;

            }
        }
                
        for(int i = 0; i<newnums.size(); i++) {

            nums[i] = newnums[i];

        }

        return count+1;
    }
};