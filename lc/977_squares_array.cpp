#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;

        for(auto &n: nums) {
            sq.push_back(n*n);
        }

        sort(sq.begin(), sq.end());

        return sq;
    }
};
