#include<iostream>
using namespace std;

class Solution {
public:
    // using catalan number formula -> Cn+1 = 4n+2/n+2 * Cn | C0 = 1
    int numTrees(int n) {
        long val = 1;
        for(int i = 0; i < n; i++) {
            val = val * (4*i + 2) / (i+2);
        }      
        return val;
    }
};