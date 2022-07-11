#include<iostream>

using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        
        while(num2 != 0) {
            unsigned c = num1 & num2;
            num1 = num1 ^ num2;
            num2 = c<<1;
        }

        return num1;
    }
};