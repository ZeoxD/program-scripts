#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int> bin;
        
        if(n == 0) {
            return 1;
        }

        while(n>0) {
            bin.push_back(n%2);
            n = n/2;
        }
        int cmp = 0;
        for(int i = 0; i < bin.size(); i++) {
            if(bin[i] == 0) {
                cmp += pow(2, i);
            }
        }

        return cmp;
    }
};
