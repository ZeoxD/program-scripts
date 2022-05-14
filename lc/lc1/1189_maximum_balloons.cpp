#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> um;

        for(const auto &ch: text) {
            um[ch]++;
        }

        for(auto it = um.begin(); it!=um.end(); it)
    }
};