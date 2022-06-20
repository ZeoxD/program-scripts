#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int count = 0;
        
        for(int i = 0; i < size; ++i) {
            int l = i-1 >= 0 ? flowerbed[i-1] : 0;
            int r = i+1 <= size - 1 ? flowerbed[i+1] : 0;

            if(flowerbed[i] == 0 && l == 0 && r == 0) {
                count++;
                ++i;
            }
        }

        if( n <= count ) {
            return true;
        }

        return false;
    }
};