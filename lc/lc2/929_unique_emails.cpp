#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        set<string> st;
        string newmail = "";
        for(auto e: emails) {
            newmail = "";
            int i = 0;
            for(; i < e.size(); i++) {

                if(e[i] == '+' || e[i] == '@') {
                    break;
                }
                else if(e[i] != '.') {
                    newmail += e[i];
                }
            }
            if(e[i] == '+') {
                while(e[i] != '@') {
                    ++i;
                }
            }
            
            if(e[i] == '@') {

                while(i<e.size()) {
                    newmail += e[i];
                    ++i;
                }
            }

            st.insert(newmail);

        }

        return st.size();
    }
}; 
