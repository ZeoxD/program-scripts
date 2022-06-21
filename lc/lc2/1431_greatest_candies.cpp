#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        int maxval = 0;
        for(int i = 0; i < size; i++) {
            maxval = max(maxval, candies[i]);
        }

        vector<bool> btr(size, false);

        for(int i = 0; i < size; i++) {
            if(candies[i] + extraCandies >= maxval) {
                btr[i] = true;
            }
        }

        return btr;

    }
};