#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        string ret;
        if( n%2 != 0 ) {
            while(n--) {
                ret += "a";
            }

        }
        else {
            ret += "b";
            n--;
            while(n--) {
                ret += "a";
            }
        }

        return ret;
    }
};