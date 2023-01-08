#include<iostream>
#include<set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r;
        int mx = 0;
        set<char> st;

        for(r = 0; r < s.length(); r++) {
            while( st.find(s[r]) != st.end() ) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            mx = max(mx, r-l+1);
        }
        return mx;
    }
};