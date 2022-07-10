#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> svtr;
        vector<string> ans;

        string word = "";
        for(const auto &t: text) {
            if(t == ' ') {
                svtr.push_back(word);
                word = "";
            }
            else {
                word += t;
            }
        }
        svtr.push_back(word);

        for(int i = 0; i < svtr.size()-2; i++) {

            if(svtr[i] == first) {
                if(svtr[i+1] == second) {
                    ans.push_back(svtr[i+2]);
                }
            }
        }

        return ans;
    }
};