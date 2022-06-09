#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int countBalls(int l, int h) {
        vector<int> vtr(46, 0);
        int n = (h - l) + 1;

        for(int i = l; i <= h; i++) {
            int sum = 0;
            int temp = i;
            while(temp) {
                sum += temp%10;
                temp = temp/10;               
            }
            ++vtr[sum];
        }
                
        int val = 0;
        for(n = 1; n < 46; n++) {
            val = max(val, vtr[n]);
        }

        return val;
    }
};