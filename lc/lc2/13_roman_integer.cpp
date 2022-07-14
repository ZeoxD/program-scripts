#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rmap;
        vector<int> rval;
        rmap = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for(const auto &c: s) {
            rval.push_back(rmap[c]);
        }
        int value = 0;
        for(int i = 0; i < rval.size()-1; i++) {
            if(rval[i] < rval[i+1]) {
                value += rval[i+1] - rval[i];
                rval[i+1] = 0;
                rval[i] = 0;
            } 
            else {
                value += rval[i];
                rval[i] = 0;
            }
        }

        if(rval[rval.size()-1]) {
            value += rval[rval.size()-1];
        }

        cout<<value<<endl;



        for(auto r: rval) {
            value += r;
        }

        return value;

    }
};

MCMXCIV

1000 100 1000 10 100 1 5

LVIII

50 5 1 1 1