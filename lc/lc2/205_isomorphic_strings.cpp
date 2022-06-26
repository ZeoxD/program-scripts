#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> sc;
        unordered_map<char, int> tc;
        unordered_map<char, char> umap;

        int size = s.size();

        for(int i = 0; i < size; i++) {

            if( (sc[s[i]] > 0 || tc[t[i]] > 0) && umap[s[i]] != t[i] ) {
                return false;
            }
            
            sc[s[i]]++;
            tc[t[i]]++;
            umap[s[i]] = t[i];

        }

        return true;
    }
};
