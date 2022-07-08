#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, bool> amap;
        for(const auto &c: allowed) {
            amap[c] = true;
        }

        int size = words.size();
        for(auto w: words) {
            for(auto c: w) {
                if(amap[c] != true) {
                    --size;
                    break;
                }
            }
            cout<<endl;

        }

        return size;
    }
};