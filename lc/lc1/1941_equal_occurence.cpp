#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {

        vector<short> varr(26,0);

        for( char c: s ) {
            varr[(int(c)-96)-1]++;
        }

        short check = 0;
        bool out = false;

        for(auto i: varr) {
            if(check == 0 && i != 0) {
                check = i;
            }
            if(i) {
                if(check == i) {
                    out = true;
                }
                else {
                    out = false;
                    break;
                }
            }
        }
        
        return out;
    }
};