#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rm;
        unordered_map<char, int> mm;

        for(const auto &r: ransomNote) {
            rm[r]++;
        }

        for(const auto &m: magazine) {
            mm[m]++;
        }

        for(auto it = rm.begin();  it != rm.end(); it++) {
            if(it->second != mm[it->first]) {
                return false;
            }
        }

        return true;
        
    }
};