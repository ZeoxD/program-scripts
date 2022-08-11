#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool ispal(string str, int lp, int rp) {
        while(lp < rp) {
            if(str[lp] != str[rp]) return false;
            lp++; rp--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.length()-1;
        bool flag = true;
        while(l < r) {
            if(s[l] != s[r]) {
                flag = ispal(s, l+1, r) || ispal( s, l , r-1 );
                break;
            }
            l++; r--;
        }
        
        return flag;
    }
};