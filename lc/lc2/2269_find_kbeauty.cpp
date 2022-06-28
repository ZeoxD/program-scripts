#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        vector<int> digits;
        int temp = num;
        while(num != 0) {
            digits.push_back(num%10);
            num = num / 10;
        }   

        int size = digits.size();
        num = 0;
        for(int i = size -1; i >= k-1; i--) {
            int val = 0;
            for(int j = i; j >= i - (k-1); j--) {
                val = val * 10 + digits[j];
            }

            if(val != 0 && temp % val == 0) {
                ++num;
            }

        }
        
        return num;
    }
};