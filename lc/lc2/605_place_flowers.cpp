#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        if(size % 2 == 0) {
            int ones = 0;
            for(int i = 0; i < size; i++) {
                if(flowerbed[i] == 1) {
                    ++ones;
                }
            }
            if(ones + n <= size/2) {
                return true;
            }
        }
        else {
            int ones = 0;
            for(int i = 0; i < size; i++) {
                if(flowerbed[i] == 1) {
                    ++ones;
                }
            }

            if(flowerbed[0] == 1 ) {
                if(ones + n <= size/2 + 1) {
                    return true;
                }

            }
            else {
                if(ones + n <= size/2) {
                    return true;
                }
            }
        }
        
        return false;
    }
};