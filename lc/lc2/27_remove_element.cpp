#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();

        int l = 0; int r = l+1;

        while(l < r && r < size) {
            if(nums[l] == val && nums[r] != val) {
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                l++;
                r++;
            }

            if(nums[l] != val ) {
                ++l;
            }

            if(nums[r] == val) {
                ++r; 
            }

        }
        
        return l;
    }
};