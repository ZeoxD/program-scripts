#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0, slow = 0;
        while(1) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast) {
                break;
            }
        }
        int new_slow = 0;
        while(1) {
            slow = nums[slow];
            new_slow = nums[new_slow];
            if(slow = new_slow) {
                return slow;
            }
        }
        return -1;
    }
};