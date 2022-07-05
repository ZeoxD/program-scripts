#include<iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        int val = 0;
        for(int i = 1; i <= n ; i++) {
            val += i;
            if(val > n) {
                return i-1;
            }
        }

        return 0;
    }
};