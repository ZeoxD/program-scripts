#include<string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        
        int len = s.length();

        for(int i = 0 ;i < len; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }

        return s;
    }
};