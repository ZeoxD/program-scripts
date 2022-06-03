#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int size = s.size();
        vector<char> snew(size);

        for(int i = size-1; i>=0; i--) {
            snew[(size-1)-i] = s[i];
        }

        for(int i = 0; i< size; i++) {
            s[i] = snew[i];
        }
    }
};
