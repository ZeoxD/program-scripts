#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {

        vector<int> vtr;

        while( n > 0 ) {
            vtr.push_back(n%2);
            n = n / 2;
        }

        for(int i = 0; i < vtr.size()-1; i++) {
            if(vtr[i] == 0 && vtr[i+1] != 1) {
                return false;
            }
            else if(vtr[i] == 1 && vtr[i+1] != 0) {
                return false;
            }
        }
        
        return true;
    }
};