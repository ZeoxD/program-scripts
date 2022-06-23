#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        
        int l = 0, r = l+1;
        while(r < size && l < size) {
            if(nums[l] == 0 && nums[r] != 0) {
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;

                ++l;
                ++r;
            }
            else if(nums[r] == 0) {
                ++r;
            }
            else if(nums[l] != 0) {
                ++l;
                r = l + 1;
            }
                        
        }       
    }
};