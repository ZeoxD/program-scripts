#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int curr = 0;
        int max = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                if(s[i]>=48 && s[i]<=57) {
                    curr *= 10;
                    curr += int(s[i])-48;
                }
            }
            else if( ((s[i-1]>=48 && s[i-1]<=57) && s[i] == ' ') ) {
                if(curr > max) {
                    max = curr;
                    curr = 0;
                }

                else {
                    return false;
                }
            }
            
        }   
        
        if(curr>0 && curr<=max) {
            return false;
        }


        return true;
    }
};
