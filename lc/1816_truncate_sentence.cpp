#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string snew;
        for(int i = 0; i<s.length(); i++) {
            if(int(s[i]) == 32) {
                k--;
            }
            if(k<1){
                break;
            }
            snew += s[i];
        }
        return snew;
    }
};