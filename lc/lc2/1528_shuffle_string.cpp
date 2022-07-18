#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = s;

        int size = s.length();

        for(int i = 0; i < size; i++) {
            str[indices[i]] = s[i];
        }      

        return str;
    }
};