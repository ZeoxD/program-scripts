#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector<int> vtr(size);
        vector<int> imap(101, 0);

        for(int i = 0; i < size; i++) {
                imap[nums[i]]++;
        }

        for(int i = 1; i < 101; i++) {
            imap[i] = imap[i] + imap[i-1];
        }

        for(int i = 0; i < size; i++) {
            if(nums[i] != 0) {
                vtr[i] = imap[nums[i]-1];
            }
            else {
                vtr[i] = 0;
            }
        }

        return vtr;
    }
};