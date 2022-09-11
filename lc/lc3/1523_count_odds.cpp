#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        if(low%2 and high%2) count = ceil((high - low + 1)/2);
        else count = (high-low+1) / 2;
        return count;
    }
};