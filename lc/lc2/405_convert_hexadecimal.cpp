#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        unsigned int n = num;

        char hexarr[17] = "0123456789abcdef";
        string str;

        while(n) {
            str += hexarr[n%16];
            n = n/16;
        }

        reverse(str.begin(), str.end());

        return str;

    }
};