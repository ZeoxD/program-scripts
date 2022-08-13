#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string, int> um;
        um["type"] = 0;
        um["color"] = 1;
        um["name"] = 2;
        int count = 0;
        for(int i = 0; i < items.size(); i++) {
            if(items[i][um[ruleKey]] == ruleValue) {
                ++count;
            }
        }

        return count;
    }
};