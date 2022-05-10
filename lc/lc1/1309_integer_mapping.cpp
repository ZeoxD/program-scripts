#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        string output = "";
        int index = 0;

        for(int i = s.length()-1; i>=0; i--){
            if(s[i] == '#') {
                index = i;
                break;
            }
        }

        for(int i = index; i>=0; i--) {
            if(s[i] == '#') {
                output += char( int(s[i-2]) + int(s[i-1]) + 96 );
            }
        }

        for(int i = index; i < s.length(); i++ ){
            output += char( int(s[i]) + 96 );
        }

        return output;
    }
};


//      10#11#12
//      01234567