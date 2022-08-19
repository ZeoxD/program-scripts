#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string sn;
        for(auto w: words) {
            sn += w;
            if(s == sn) return true;
            if(sn.length() > s.length()) return false;
        }
        return false;
    }
};