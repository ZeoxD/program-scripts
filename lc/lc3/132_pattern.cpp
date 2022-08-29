#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<pair<int,int>> st;
        int mv = nums[0];
        for(const auto &n: nums) {
            while(!st.empty() and st.top().first <= n) st.pop();
            if(!st.empty() and st.top().second < n) return true;
            st.push({n , mv});
            mv = min(mv, n);
        }
        return false;
    }
};