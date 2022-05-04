#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int fadd = 0, sadd = 0;
        for(int i = 0, j=s.length()/2 ; i<s.length()/2; i++, j++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ) {
                fadd++;
            }
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' ) {
                sadd++;
            }

        }      
        if(fadd == sadd) {
            return true;
        }

        return false;
    }
};