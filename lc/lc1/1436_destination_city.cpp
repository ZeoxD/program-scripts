#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> um;

        for(auto &v: paths) {
            for(auto &p: v) {
                um[p]++;
            }
        }

        vector<string> vtr;

        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->second == 1) {
                vtr.push_back(it->first);
            }
        }

        for(int i = 0; i < paths.size(); i++) {
            if(vtr.at(0) == paths[i][0]) return vtr.at(1);
        }

        return vtr.at(0);
    }
};
