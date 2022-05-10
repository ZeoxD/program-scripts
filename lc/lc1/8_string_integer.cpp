#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {

        bool sign = true;
        int val = 0;
        int nextval = 1;

        for(int i = 0; i<s.length()-1; i++) {
            if(s[i] == ' ' || s[i] == '0') {
                continue;
            }

            if((int(s[i])>=48 && int(s[i])<=57) && (int(s[i+1])>=48 && int(s[i+1])<=57)) {
                val += int(s[i])-48;
                val = val*10;
                nextval = i+1;
            }
            if(s[i] == '-') {
                sign = false;
            }
        }      

        val += int(s[nextval]-48);

        if(!sign) {
            cout<<"inside flag";
            val *= -1;
        }

        if(s[0] >= 'a' && s[0] <= 'z') {
            val = 0;
        }

        return val;
    }
};
