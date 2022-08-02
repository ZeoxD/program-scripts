#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        int p = 0;
        int slen = s.length();
        for(int i=0;i<slen;i++) {
            if(p>0 && abs(s[i] - s[p-1]) == 32) --p;
            else s[p++] = s[i];
        }

        return s.substr(0,p);
    }
};