#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> vtr(n+1, 0);

        for(auto t: trust) {
            vtr[t[1]]++;
            vtr[t[0]]--; 
        }

        for(int i = 1; i < n+1; i++) {
            if(vtr[i] == n-1) {
                return i;
            }
        }

        return -1;
    }
};