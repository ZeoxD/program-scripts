#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();

        vector<int> ht(size+1, 0);

        for(auto n: nums) {
            ht[n]++;
        }

        for(int i = 0; i < size+1; i++) {
            if(ht[i] == 0) {
                return i;
            }
        }

        return 0;
    }
};