#include<iostream>
#include<vector>
#define vi vector<int>
#define pb push_back
using namespace std;
class Solution {
public:
    bool isSameAfterReversals(int n) {
        vi d; int t=n;
        while(n) {
            d.pb(n%10);
            n/=10;
        }
        for(auto dv: d) n=n*10+dv;
        d.clear();
        while(n) {
            d.pb(n%10);
            n/=10;
        }
        for(auto dv: d) n = n*10+dv;
        return n==t;
    }
};