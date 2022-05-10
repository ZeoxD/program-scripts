#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool flag = false;
        string fp;
        for(auto s: words) {
            if(s.length() == 1) {
                return s;
            }
            else {
                for(int i = 0; i<s.length()/2; i++){
                    if(s[i] == s[(s.length()-1)-i]) {
                        flag = true;
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
                if(flag == true) {
                    fp = s;
                    break;
                }
            }
        }
        return fp;
    }
};