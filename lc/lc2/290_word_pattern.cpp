#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> umc;
        unordered_map<string, int> ums;
        unordered_map<char, string> umcs;
        vector<string> svtr;

        int len = s.length();

        int i = 0;
        int j = 0;
        string str;
        while(j < len) {

            while(j < len && s[i] != ' ' && s[j] != ' ') {
                ++j;
            }

            str = "";
            while(i<j) {
                str += s[i++];
            }
            svtr.push_back(str);

            ++j;
            ++i;
        }

        int size = svtr.size();
        int plen = pattern.length();

        if(size != plen) {
            return false;
        }
        
        for(int i = 0; i < size; i++) {
            if(umc[pattern[i]] || ums[svtr[i]]) {
                if(umcs[pattern[i]] != svtr[i]) {
                    return false;
                }
            }

            umc[pattern[i]]++;
            ums[svtr[i]]++;
            umcs[pattern[i]] = svtr[i];

        }


        return true;
    }
};
