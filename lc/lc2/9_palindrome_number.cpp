#include<iostream>
#include<vector>

using namespace std;

class Solution {
    vector<int> digSep(int n) {
        vector<int> v;
        while(n!=0) {
            v.push_back(n%10);
            n = n/10;
        }

        return v;
    }   
    bool check(vector<int> &v) {
        int size = v.size();
        int i = 0;
        int j = size - 1;
        while(i < j) {
            if(v[i] != v[j]) {
                return false;
            }
        }

        return true;
    } 

public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        if(x >= 0 && x <= 9) {
            return true;
        }
        if(x > 9) {
            vector<int> vtr = digSep(x);
            return check(vtr);
        }

    }
};