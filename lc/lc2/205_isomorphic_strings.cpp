#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, bool> uma;
        unordered_map<char, bool> umb;

        int size = s.size();

        for(int i = 0; i < size; i++) {

            if(uma[s[i]]) {
                return false;
            }
            
            uma[s[i]] = t[i];
            umb[t[i]] = s[i];

        }

        return true;
    }
};