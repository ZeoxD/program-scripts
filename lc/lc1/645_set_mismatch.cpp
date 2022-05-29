#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int size = nums.size();
        vector<int> ht(size, 0);

        for(auto n: nums) {
            ht[n]++;
        }

        vector<int> res;

        for(int i = 0; i < size; i++) {
            if(ht[i] == 0 || ht[i] >= 2) {
                res.push_back(i);
            }
        }

        return res;
    }
};