#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> vtr;
        for(auto a: asteroids) {
            while(!st.empty() and a < 0 and st.top() > 0) {
                if(a+st.top() < 0) {
                    st.pop();
                }
                else if(a+st.top() > 0) {
                    a = 0;
                }
                else {
                    st.pop();
                    a = 0;
                }
                if(a) st.push(a);
            }
        }      
        while(!st.empty()) {
            vtr.push_back(st.top());
            st.pop();
        }
        return vtr;
    }
};