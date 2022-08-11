#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        unordered_map<char, int> um;
        for(const auto &c: s) {
            um[c]++;
        }      
        char c; int odd = 0;
        for(auto it = um.begin(); it!=um.end(); it++) {
            if(it->second % 2) {
                c = it->first;
                ++odd;
            }
        }

        if(odd > 2) {
            return false;
        }

        return c;
    }
};