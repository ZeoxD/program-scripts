#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<char, int> um;

    int maxMap() {
        int val = 0;
        for(auto it = um.begin(); it != um.end(); ++it) {
            if(it->second > val) val = it->second;
        }
        return val;
    }

    int characterReplacement(string s, int k) {
        int ans = 0;
        int l = 0;
        for(int r = 0; r < s.length(); r++) {
            um[s[r]]++;
            while( ((r-l+1) - maxMap()) > k) {    
                um[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
