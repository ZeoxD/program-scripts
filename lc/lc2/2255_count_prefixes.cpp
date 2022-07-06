#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int size = words.size();
        int len = s.length();
        for(auto w: words) {
            for(int i = 0; i < len; i++) {
                if(s[i] != w[i]) {
                    break;
                }
            }
        }
    }
};