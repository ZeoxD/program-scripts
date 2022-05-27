#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> um;
        for(const auto &ch: s) {
            um[ch]++;
        }     

        vector<int> vtr;
        for(auto it = um.begin(); it!=um.end(); it++) {
            vtr.push_back(it->second);

        }

        for(const auto &ch: t) {
            um[ch]++;

        }

        int iter = 0;
        for(auto it = um.begin(); it!=um.end(); it++) {
            if(it->second != vtr[iter]*2) {
                return false;
            }
            iter++;

        }

        return true;
    }
};