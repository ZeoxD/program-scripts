#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
    vector<string> chopStr(string s) {
        string str = "";
        vector<string> vtr;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ' && str.size()) {
                vtr.push_back(str);
                str = "";
            }
            else str += s[i];
        }
        vtr.push_back(str);
        return vtr;
    }
public:
    string sortSentence(string s) {
        vector<string> vtr;
        vtr = chopStr(s);
        vector<string> v(vtr.size());
        for(const auto &str: vtr) {
            v[int(str[str.size()-1])-49] = str.substr(0, str.size()-1); 
        }
        string ss;
        for(const auto &str: v) {
            ss += str;
            ss += ' ';
        }
        return ss.substr(0, ss.size()-1);
    }
};