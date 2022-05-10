#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int out = 0;
        int depth = 0;
        for(char c: s) {
            if(c == '(') {
                depth++;
            }
            if(c == ')') {
                depth--;
            }
            out = max(out, depth);
        }
        return out;
    }
};