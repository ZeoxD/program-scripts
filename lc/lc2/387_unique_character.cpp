#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> umci;

        for(const auto &c: s) {
            umci[c]++;
        }

        int len = s.length();

        for(int i = 0; i < len; i++) {
            if( umci[s[i]] == 1 ) {
                return i;
            }
        }

        return -1;
    }
};