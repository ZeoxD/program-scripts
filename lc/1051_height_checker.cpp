#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> newheights(heights.size());
        int count = 0;

        for(int i = 0; i< heights.size(); i++) {
            newheights[i] = heights[i];
        }

        sort(newheights.begin(), newheights.end());

        for(int i = 0; i<heights.size(); i++) {
            if(newheights[i] != heights[i]) {
                count++;
            }
        }

        return count;
    }
};