#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int size = points.size();
        int minval = INT8_MAX, mhn = 0;
        int index = -1;
        for(int i = 0; i < size; i++) {
            if(x == points[i][0] || y == points[i][1]) {
                mhn = abs(points[i][0] - x) + abs(points[i][1] - y);
                if(minval < mhn) {
                    minval = mhn;
                    index = i;
                }
            }

        }

        return index;

    }
};