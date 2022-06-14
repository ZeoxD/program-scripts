#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while(pq.size()>1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x-y) pq.push(x-y);
        }

        if(pq.empty()) {
            return 0;
        }

        return pq.top();
    }
};