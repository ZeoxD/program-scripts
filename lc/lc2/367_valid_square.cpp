#include<iostream>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i = 1; num>=0; i=i+2) {
            num -= i;
            cout<<num<<" ";
        }

        if(num>0) {
            return false;
        }

        return true;
    }
};