#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0, j = s.length()-1;
        char temp;
        while(i<j) {
            
            if(s[i] < 65 || s[i] > 122 || (s[i] >= 91 && s[i] <= 96)) {
                i++;
            }
            if(s[j] < 65 || s[j] > 122 || (s[j] >= 91 && s[j] <= 96) ) {
                j--;
            }
            
            if( ( (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) ) && ( (s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122) ) ) {
                
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                i++;
                j--;
                
            }
            
        }

        return s;
    }
};