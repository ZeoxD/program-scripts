#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> um;

        for(const auto &c: s) {
            um[c]++;
        }

        int lodd = 0;
        int psize = 0;
        for(auto it = um.begin(); it!=um.end(); it++) {
            psize += it->second;

            if(it->second % 2 != 0) {
                lodd++;
            }


        }

        return psize - (lodd-1);
    }
};
