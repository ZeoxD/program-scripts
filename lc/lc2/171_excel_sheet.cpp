#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int val = 0;

        for(const auto &c: columnTitle) {
            val = (val*26) + (int(c) - 64);
        }

        return val;
    }
};