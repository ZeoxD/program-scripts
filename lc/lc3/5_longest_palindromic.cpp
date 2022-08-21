#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string str = "";
        int strmax = 0;

        for(int i = 0; i < s.length(); i++) {
            int l = i, r = i;
            while(l >= 0 and r < s.length() and s[i] == s[r]) {
                if((r-l+1) > strmax) {
                    str = s.substr(l, r+1);
                    strmax = r-l+1;
                }
                l = l - 1;
                r = r + 1;
            }

            int l = i, r = i + 1;
            while(l >= 0 and r < s.length()-1 and s[i] == s[r]) {
                if((r-l+1) > strmax) {
                    str = s.substr(l, r+1);
                    strmax = r-l+1;
                }
                l = l-1;
                r = r+1;
            }
        }

        return str;
    }
};