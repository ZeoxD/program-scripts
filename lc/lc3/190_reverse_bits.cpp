#include<iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t val = 0;
        for(int i = 0; i < 32; i++) val = (val<<1)+(n>>i&1);
        return val;
    }
};