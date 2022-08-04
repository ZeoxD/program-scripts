#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int size = points.size();
        int dy = points[1][0] - points[0][0];
        int dx = points[1][1] - points[0][1];

        for(int i = 1; i < size-1; i++) {
            if(dy * (points[i+1][1] - points[i][1]) != dx * (points[i+1][0] - points[i][0]) ) {
                return true;
            }
        }

        return false;
    }
};