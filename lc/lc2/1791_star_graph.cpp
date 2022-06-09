#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> emap;

        int count = 0;
        for(auto edge: edges) {
            for(auto e: edge) {
                emap[e]++;
            }

            if(count++ == 2) {
                break;
            }
        }

        for(auto it = emap.begin(); it != emap.end(); it++) {
            if(it->second > 1) {
                return it->first;
            }
        }

        return 0;
    }
};