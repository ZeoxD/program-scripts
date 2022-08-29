#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(const auto &c: s) {
            if(!st.empty() && st.top().first == c) {
                st.top().second++;
            }
            else {
                st.push({c,1});
            }

            if(st.top().second == k) {
                st.pop();
            }
        }
        string str;
        while(!st.empty()) {
            int loop = st.top().second;
            while(loop--) {
                str += st.top().first;
            }
            st.pop();
        }
        return str;
    }
};