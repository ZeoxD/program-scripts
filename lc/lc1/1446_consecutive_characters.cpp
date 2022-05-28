#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int maxPower(string s) {
        
        int size = s.length();
        vector<int> vtr;
        vtr.push_back(0);
        for(int i = 0; i < size-1; i++) {
            if(s[i] != s[i+1]) {
                vtr.push_back(i+1);
            }
        }
        int max = 0;
        for(int i = 0; i<vtr.size()-1; i++ ) {
            if(max < vtr[i+1] - vtr[i]) {
                 max = vtr[i+1] - vtr[i];
            }
        }


        return max;
    }
};