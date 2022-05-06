#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0;
        int sumB = 0;

        for(auto a: aliceSizes) {
            sumA += a;
        }

        for(auto b: bobSizes) {
            sumB += b;
        }

        int diff = (sumA - sumB) / 2;

        unordered_set<int> us(aliceSizes.begin(), aliceSizes.end());

        for(auto b: bobSizes) {
            if(us.count(b + diff)) {
                return {b, b+diff};
            }
        }

        return {};
    }
};