#include<iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0 || x == 1) {
            return x;
        }

        int l = 1, r = x/2, val;

        while(l <= r) {
            long long mid = (l+r)/2;

            if(mid*mid == x) {
                return mid;
            }

            if(mid*mid <= x) {
                l = mid + 1;
                val = mid;
            }
            else {
                r = mid -1;
            }
        }

        return val;

    }
};