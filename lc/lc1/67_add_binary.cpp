#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length();
        int j = b.length();

        int carry = 0;
        string ans;
        while(i>=0 || j>=0 || carry) {
            if(i>=0) {
                carry += a[i] - '0';
                i--;
            }
            if(j>=0) {
                carry += b[j] - '0';
                j--;
            }

            ans += (carry%2 + '0');
            carry = carry / 2;

        }

        return ans;
    }
};