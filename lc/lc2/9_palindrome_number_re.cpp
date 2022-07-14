#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        int temp = x;
        int y = 0;
        while(temp >= 10) {
            y = y * 10;
            y += temp%10;
            temp = temp / 10;
        }

        return x/10 == y && temp == x%10;
    }
};  