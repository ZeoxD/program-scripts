#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<set>

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        priority_queue<int, vector<int>, greater<int>> pq;
        set<int> st;
        int slen = s.length();
        for(int i = 0; i<slen; i++) {
            if(s[i] >= 48 && s[i] <= 57) {
                st.insert(s[i]-'0');
            }
        }

        for(auto s: st) {
            pq.push(s);

            if(pq.size() > 2) {
                pq.pop();
            }
        }

        if(pq.size() < 2) return -1;

        return pq.top();
    }
};