#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;

        for(auto str: operations) {
            if(str[1] == '+') {
                ++count;
            }
            else {
                --count;
            }
        }

        return count;
    }
};