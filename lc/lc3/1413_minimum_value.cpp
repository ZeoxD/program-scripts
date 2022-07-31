#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size);
        prefix[0] = nums[0];
        for(int i=1;i<size;i++) prefix[i] = nums[i] + prefix[i-1];
        int minval = prefix[0];
        for(int i=1;i<size;i++) if(minval > prefix[i]) minval = prefix[i];
        if(minval < 0) return 1-minval;
        return minval + 1;
    }
};