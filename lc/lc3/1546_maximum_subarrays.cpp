#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        set<int> st;
        int prefix = 0, val = 0;
        st.insert(0);
        for(auto n: nums) {
            prefix += n;
            if(st.find(prefix - target) != st.end()) {
                ++val;
                st.clear();
            }
            st.insert(prefix);
        }

        return val;
    }
};