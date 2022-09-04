#include<iostream>
using namespace std;

class Solution {
public:
    int fact(int n) {
        if(!n) return 1;
        return n*fact(n-1);
    }
    int numTrees(int n) {
        cout<<fact(2*n);
        cout<<(fact(n) * fact(n+1));
        return fact(2*n)/(fact(n) * fact(n+1));
    }
};