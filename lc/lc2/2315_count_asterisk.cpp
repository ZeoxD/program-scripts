#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int size = s.length();
        bool pipe = false;
        int aster = 0;
        for(int i = 0; i < size; i++) {
            if(s[i] == '*' || s[i] == '|') {
                if(s[i] == '|') pipe = !pipe;

                if(!pipe && s[i] == '*')  {
                    ++aster;
                }
            }
            
        }
        return aster;

    }
};