#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        vector<int> dp(size+1);
        for(int i = size-1; i>= 0; i--) {
            for(int j = 0; j < triangle[i].size(); i++) {
                dp[i] = triangle[i][j] + min(dp[i], dp[i+1]);
            }
        }
        return dp[0];
    }
};