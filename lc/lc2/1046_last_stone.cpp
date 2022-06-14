#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());

        int val;
        while(stones.size() > 1) {
            int size = stones.size();
            if(stones[size] != stones[size-1]) {
                val = stones[size] - stones[size-1];
            }
            stones.pop_back();
            stones.pop_back();

            stones.push_back(val);
        }

        return stones[0];
    }
};
