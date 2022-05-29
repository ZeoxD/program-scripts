#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& n) {
        
        int size = n.size();
        int l = n[0], r = n[size-1];

        int i, j;
        for(i = 0, j = size-1; i <= j; ) {

            if(l < r) {
                l += n[++i];
            }
            else if(l > r) {
                r += n[--j];
            }
            
            if(l == r && i == j) {
                return i;
            }
        }
        return -1;
    }
};