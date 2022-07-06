#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int size = words.size();
        int c = 0;
        for(auto w: words) {
            for(int i = 0; i < w.size(); i++) {
                if(w[i] != s[i]) {
                    ++c;
                    break;
                }
            }
        }
        
        return size - c;
    }
};