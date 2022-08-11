#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string t, string s) {
        int slen = s.length();
        int tlen = t.length();

        int sptr = 0;
        int tptr = 0;

        int count = 0;
        while(sptr < slen && tptr < tlen) {
            if(s[sptr] == t[tptr]) {
                ++count;
                ++sptr;
                ++tptr;
            }
            else {
                ++sptr;
            }
        }
        return count == tlen;
    }
};