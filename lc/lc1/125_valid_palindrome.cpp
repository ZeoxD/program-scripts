#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        string snew;

        for(const auto &c: s) {
            if( (c>='0' && c<='9') || (c>='a' && c<='z') ) {
                snew += c;
            }
            else if( (c>='A' && c<='Z') ) {
                snew += c+32;
            }
        }

        int size = snew.size();

        for(int i = 0, j = size-1; i<size/2; i++, j--) {
            if(snew[i] != snew[j]) {
                return false;
            }
        }

        return true;
    }
};
