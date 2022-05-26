#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        
        vector<int> vtr;

        while(n>0) {
            vtr.push_back(n%2);
            n = n/2;
        }

        int cptr = 0;

        for(int i = 0; i < vtr.size(); i++) {
            if(vtr[i] == 1) {
                vtr[cptr++] = i;
            }
        }
        n = 0;
        for(int i = 0; i<cptr-1; i++) {
            if(vtr[i+1] - vtr[i] > n) {
                n = vtr[i+1] - vtr[i];
            }
        }


        return n;

    }
};