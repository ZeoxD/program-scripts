#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int i = size-1;
        digits[i] = ++digits[i];
        int carry = digits[i] / 10;
        while(i >= 1) {
            carry = digits[i]/10;
            if(carry) {
                digits[i] = digits[i] % 10;
            }
            
            digits[i-1] = digits[i-1] + carry;
            
            i--;
        }

        if(digits[0]<=9) {
            return digits;
        }
        
        vector<int> newvtr(size+1);
        if(carry) {
            newvtr[0] = carry;
            digits[i] = digits[i] % 10;
        }
        for(int i = 0; i < size; i++) {
            newvtr[i+1] = digits[i];
        }

        return newvtr;
    }
};