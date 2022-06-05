#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        vector<int> vtr;
        
        int val = 0;
        while(n>0){
            vtr.push_back(n%2);
            if(n%2) {
                val++;
            }
            n = n/2;
        }
        
        return val;
    }
};