#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        string snew;

        for(const auto &c: s) {
            if( (c>='0' && c<='9') || (c>='A' && c<='Z') || (c>='a' && c<='z')) {
                snew += c;
            }
        }

        int size = snew.size();

        
    }
};