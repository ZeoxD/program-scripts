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
            int size = stones.size()-1;
            
            val = abs(stones[size] - stones[size-1]);
            
            stones.pop_back();
            stones.pop_back();
            
            if(val || stones.size()==0) {
                stones.push_back(val);
            }
            
            sort(stones.begin(), stones.end());
        }

        return stones[0];
    }
};
