#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int vtr = 0, c = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'R') ++c;
            if(s[i] == 'L') --c;
            if(!c) ++vtr;
        }
        return vtr;
    }
};