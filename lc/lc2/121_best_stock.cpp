#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();

        int l = 0, r = l+1;
        int profit = 0;
        while(l<=r && r<size) {
            if(l>r) {
                l = r;
            }
            profit = max(profit, prices[r] - prices[l]);
            r++;
        }

        return profit;
    }
};