#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> vtr(122-96, 0);

        for(const auto &c: sentence) {
            vtr[int(c)-96-1]++;
        }

        for(const auto &v: vtr) {
            if(v==0) {
                return false;
            }
        }

        return true;
    }
};