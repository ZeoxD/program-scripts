#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int maxx = 0;
        for(auto i: gain) {
            curr += i;
            maxx = max(maxx,curr);
        }
        return maxx;
    }
};