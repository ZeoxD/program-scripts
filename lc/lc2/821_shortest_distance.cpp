#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int len = s.length();
        vector<int> vtr(len, INT8_MAX);
        int count = 0;
        bool flag = false;
        for(int i = 0; i < len; i++) {
            if(c == s[i]) {
                count = 0;
                flag = true;
            }
            if(flag)
            {vtr[i] = count;}
            ++count;
        } 
        flag = false;
        for(int i = len-1; i >= 0; i--) {
            if(c == s[i]) {
                count = 0;
                flag = true;
            }
            if(count < vtr[i] && flag) {
                vtr[i] = count;
            }
            ++count;
        } 

        return vtr;
    }
};