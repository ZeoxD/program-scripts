#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {\
        int size = nums.size();

        for(int i = 0; i < k; i++) {
            for(int j = 0; j < size-i; j++) {
                if(nums[j+1]<nums[j]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        for(auto n: nums) {
            cout<<n<<" ";
        }

        return nums[size-k];
    }
};