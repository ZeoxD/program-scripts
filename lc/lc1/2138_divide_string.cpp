#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> vstr;

        int flag = 0;
        string word;
        for(auto c: s) {

            if(flag == k) {
                vstr.push_back(word);
                word = "";
                flag = 0;
            }

            word += c;
            ++flag;
        }

        while(++flag <= k ) {
            word += fill;
        }

        vstr.push_back(word);

        return vstr;
        
    }
};