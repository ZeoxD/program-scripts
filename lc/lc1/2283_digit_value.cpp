#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool digitCount(string num) {

        int size = num.length();

        vector<int> vtr(10, 0);

        for(const auto &c: num) {
            vtr[int(c)-48]++;
        }

        for(int i = 0; i<size; i++) {
            if(num[i] != vtr[i]) {
                return false;
            }
        }

        return true;
    }
};