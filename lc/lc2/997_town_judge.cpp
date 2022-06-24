#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int, int> um;

        for(auto t: trust) {
            um[t[1]]++;
        }

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second == n-1) {
                return it->first;
            }
        }

        return -1;
    }
};