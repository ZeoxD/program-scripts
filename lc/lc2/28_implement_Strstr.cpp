#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = haystack.length();

        for(int i = 0; i < size; i++) {
            int iter = 0;
            while(haystack[i] == needle[iter]) {
                ++iter;
                ++i;
                if(iter == needle.size()-1) {
                    return i - iter;
                }
            }
        }      

        return -1;
    }
};