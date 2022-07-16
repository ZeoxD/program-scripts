#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int size = encoded.size();
        vector<int> vtr(size + 1);
        vtr[0] = first;
        for(int i = 0; i < size; i++) {
            vtr[i+1] = vtr[i] ^ encoded[i];
        }

        return vtr;
    }
};