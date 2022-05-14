#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> um;

        for(const auto &ch: text) {
            um[ch]++;
        }

        vector<int> vtr(5, 0);

        for(auto it = um.begin(); it!=um.end(); it++) {

            switch(it->first) {
                case 'b' :  vtr[0] = it->second;
                            break;
                
                case 'a' :  vtr[1] = it->second;
                            break;

                case 'l' :  vtr[2] = it->second/2;
                            break;

                case 'o' :  vtr[3] = it->second/2;
                            break;
                
                case 'n' :  vtr[4] = it->second;
                            break;
            
            }
        }

        int minval = vtr[0];
        for(int i = 0; i < vtr.size(); i++) {
            minval = min(minval, vtr[i]);
        }

        return minval;
    }
};