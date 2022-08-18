#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int nlen = num.length(), i;
        for(i = nlen-1; ~i; --i) if(num[i] % 2) break;
        return num.substr(0,i+1);
    }
};