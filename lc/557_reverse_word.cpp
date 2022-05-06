#include<iostream>
#include<string>

using namespace std;

class Solution {
public:

    
    string reverseWords(string s) {

        int len = s.length();
        string snew;

        for(int i = 0; i<=len; i++) {
            
            if(s[i] == 32 || s[i] == 0 ) {
                int j;
                for(j = i-1; j >= 0 && s[j] != 32 ; j--) {

                    snew += s[j];
                }
                if(i==len){
                    break;
                }
                snew += ' ';
                
            }
            
        }    
        return snew;  
    }
};
