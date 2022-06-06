#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int size = colors.size();

        int ptra = 0, ptrb = size-1;
        int max_val = 0;
        for(int i = 0; i < size; i++) {
            if(colors[ptra] != colors[i]) {
                max_val = max(max_val, i-ptra);
            }

            if(colors[i] != colors[ptrb]) {
                max_val = max(max_val, ptrb-i);
            }
        }

        return max_val;
    }
};