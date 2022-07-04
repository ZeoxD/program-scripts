#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        int len = s.length();

        for(int i = 0; i < len; i = i + 2) {
            if( (s[i] >= 97 && s[i] <= 122) && (s[i+1] >= 48 && s[i+1] <= 57) ) {
                s[i+1] = s[i] + (s[i+1] - 48);
            } 
        }

        return s;
    }
};