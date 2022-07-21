#include<iostream>

using namespace std;

class Solution {
public:

    int addDigits(int num) {
        
        if(num == 0) {
            return;
        }

        return num%10 + addDigits(num/10);
    }
};