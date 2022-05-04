#include<iostream>
#include<string>

using namespace std;

class Solution {
public:

    
    string reverseWords(string s) {

        int len = s.length();
        for(int i = 0; i<=len; i++) {
            cout<<int(s[i])<<" ";
        }

        return s;
    }
};