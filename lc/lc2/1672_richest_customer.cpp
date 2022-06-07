#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int val = 0, sum = 0;
        int rows = accounts.size();
        int cols = accounts[0].size();

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                sum += accounts[i][j];
            }
            val = max(val, sum);
            sum = 0;
        }

        return val;
    }
};
