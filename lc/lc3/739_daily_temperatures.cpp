#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> vtr(temp.size(), 0);
        stack<pair<int, int>> st;
        for(int i = 0; i < temp.size(); i++) {
            while(!st.empty() and temp[i] > st.top().second) {
                auto val = st.top(); st.pop();
                vtr[val.first] = i - val.first;
            }
            st.push(make_pair(i, temp[i]));
        }
        return vtr;
    }
};