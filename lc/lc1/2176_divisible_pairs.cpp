#include<iostream>
#include<vector>
#define AND &&

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        const int SIZE = nums.size();
        int count = 0;
        
        for(int i = 0; i<SIZE; i++) {
            for(int j = 0; j<SIZE; j++) {
                if((nums[i] == nums[j]) AND ( i*j % k == 0) AND (i<j)) {
                    count++;
                }
            }
        }

        return count;
    }
};