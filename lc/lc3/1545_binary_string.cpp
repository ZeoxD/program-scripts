#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
    string bin(int n) {
        if(n < 2) return "0";
        string s = bin(n-1);
        string t = s;
        reverse(t.begin(), t.end());
        for(auto &c: t) c = c^1;
        return s + "1" + t;
    }
public:
    char findKthBit(int n, int k) {
        string s = bin(n);
        cout<<s;
        return s[k-1];
    }
};