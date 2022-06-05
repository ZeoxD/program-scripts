#include<iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
          
        while(n!=1) {
            if((n%2 && n!=1) || !n ) {
                return false;
            }
            n = n / 2;
        }
        return true;
    }
};