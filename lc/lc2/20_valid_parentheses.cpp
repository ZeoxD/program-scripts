#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<int> vtr;

        for(const auto &c: s) {
            if(!vtr.empty() && vtr.back() == '(' && c == ')') {
                vtr.pop_back();
            }
            else if(!vtr.empty() && vtr.back() == '{' && c == '}') {
                vtr.pop_back();
            }
            else if(!vtr.empty() && vtr.back() == '[' && c == ']') {
                vtr.pop_back();
            }


            vtr.push_back(c);
        }

        if(vtr.empty()) {
            return true;
        }

        return false;
    }
};