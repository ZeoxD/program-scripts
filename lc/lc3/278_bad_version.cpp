#include<iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0, r = n;
        int badval;
        while(l <= r) {
            int m = (l + r) / 2;
            
            if(isBadVersion(m) == false) {
                l = m + 1;
            }
            else {
                r = m - 1;
                badval = m;
            }
        }
        return badval;
    }
};