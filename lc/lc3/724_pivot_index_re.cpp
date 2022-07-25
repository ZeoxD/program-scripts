#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size);
        vector<int> suffix(size);
        prefix[0] = nums[0];
        for(int i = 1; i < size; i++) {
            prefix[i] += prefix[i-1];
        }
        for(int i = size - 2; i>= 0; i--) {
            suffix[i] += suffix[i+1]; 
        }

        for(int i = 0; i < size; i++) {
            if(prefix[i] == suffix[i]) {
                return i;
            }
        }
        
        return -1;
    }
};
