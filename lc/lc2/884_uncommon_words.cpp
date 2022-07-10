#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> um;
        vector<string> vtr;

        string word = "";
        for(auto c1: s1) {
            if(c1 == ' ') {
                um[word]++;
                word = "";
            }
            else {
                word += c1;
            }
        }
        um[word]++;

        word = "";
        for(auto c2: s2) {
            if(c2 == ' ') {
                um[word]++;
                word = "";
            }
            else {
                word += c2;
            }
        }
        um[word]++;

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second == 1) {
                vtr.push_back(it->first);
            }
        }

        return vtr;
    }
};