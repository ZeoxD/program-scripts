#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int m = 0;

        while(n != 1) {
            m += (n/2);
            n = (n%2)==0 ? (n/2) : (n/2)+1;
        }

        return m;
    }
};