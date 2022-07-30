#include<iostream>
using namespace std;

class Solution {
    int revdig(int x) {
        int rev = 0;
        while(!x) {
            rev = rev*10 + x%10;
            x /= 10;
        }
        return rev;
    }
public:
    int reverse(int x) {
        if(!x) return x;
        if(x<0) return -revdig(-x);
        else return revdig(x);
    }
};