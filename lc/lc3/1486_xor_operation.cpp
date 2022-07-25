#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> vtr(n);
        int xv = 0;
        for(int i = 0; i < n; i++) vtr[i] = start + (2*i);
        for(int i = 0; i < n; i++) xv ^= vtr[i];
        return xv;
    }
};