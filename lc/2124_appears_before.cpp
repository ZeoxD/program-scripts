#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
                
        for(int i = 1; i < s.length(); i++) {
            if( s[i] >= s[i-1] ) {
                continue;
            }    
            else {
                return false;
            }
        }
        
        return true;
    }
};