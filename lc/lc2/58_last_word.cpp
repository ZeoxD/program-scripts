#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length();
        int iptr, jptr;
        bool flag = false;
        for(int i = size-1; i>=0; i--) {
            if(!flag &&  s[i] != ' ') {
                iptr = i;
                flag = true;
            }
            else if(flag && s[i] == ' ') {
                jptr = i;
                break;
            }

        }

        return iptr - jptr;
    }
};