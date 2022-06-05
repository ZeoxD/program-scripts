#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> um;

        for(const auto &c: s) {
            um[c]++;
        }

        for(const auto &c: t) {
            um[c]++;
        }

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second > 0 && it->second % 2 != 0) {
                return it->first;
            }
        }

        return ' ';
    }
};