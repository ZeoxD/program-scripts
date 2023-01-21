#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> um;
        int ans = 0;

        int l = 0;
        int maxF = 0;
        for(int r = 0; r < s.length(); r++) {
            um[s[r]]++;
            maxF = max(maxF, um[s[r]]);

            while( ((r-l+1) - maxF) > k) {
                um[s[l]]--;
                l++;
            }

            ans = max(ans, r-l+1);
        }
        return ans;
    }
};