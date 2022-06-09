#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> vtr(size*2);

        for(int i = 0; i<2; i++) {
            for(int j = 0; j<size; j++) {
                vtr[(i*size)+j] = nums[j];
            }
        }

        return vtr;
    }
};

