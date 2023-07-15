#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows <= 1) {
            return s;
        }
        
        vector<string> vtr(numRows, "");
        int len = s.length();
        int index;
        int diff = (2*numRows) - 2;
        int diagDiff;
        int diagIndex;
        for(int i = 0; i < numRows; i++) {
            index = i;
            while(index < len) {
                vtr[i].push_back(s[index]);
                if( i != 0 && i != numRows-1 ) {
                    diagDiff = 0;
                    diagIndex = 0;
                    diagDiff = diff - (2*i);
                    diagIndex = index + diagDiff;
                    
                    if(diagIndex < len) {
                        vtr[i].push_back(s[diagIndex]);
                    }
                }
                index += diff;
            }
        }
        
        string str = "";
        for(const auto &s: vtr) {
            str += s;
        }
        
        return str;
    }
};
