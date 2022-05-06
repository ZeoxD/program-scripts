#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int slen = pref.length();
        
        int count = 0;
        for(auto &w: words) {
            for(int i = 0; i<slen; i++) {
                if(pref[i] != w[i]) {
                    count++;
                    break;
                }
            }
        }      

        return words.size() - count;
    }
};