#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int p = 0;
        for(int i = 1; i<strs.size(); i++) {
            p = 0;
            while(p < strs[i].size() && p < s.size() && s[p] == strs[i][p]) {
                ++p;
            }
            s.substr(0, p);
        }

        return s;
    }
};