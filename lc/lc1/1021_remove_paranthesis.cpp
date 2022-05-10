#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string snew;
        int len = s.length();
        int sarr[len]; 
        int count = 0;

        for(int i = 0; i < len; i++) {
            if(s[i] == '(') {
                count++;
            }
            else if(s[i] == ')') {
                count--;
            }
            sarr[i] = count;
            
        }

        for(int i = 1; i < len - 1; i++) {
            if( (sarr[i] == 0 && sarr[i+1] == 1) || (sarr[i-1] == 0 && sarr[i] == 1) )
            {
                continue;
            }
            else {
                snew += s[i];
            }

        }

        return snew;
    }
};

// (()()())(())
// 121212101210