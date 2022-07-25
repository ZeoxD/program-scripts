#include<iostream>
#include<vector>
#define co coordinates

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size = coordinates.size();
        int dy = co[1][1] - co[0][1];
        int dx = co[1][0] - co[0][0];

        for(int i = 0; i < size - 1; i++) {
            if(dy * (co[i+1][0] - co[i][0]) != dx * (co[i+1][1] - co[i][0]) ) {
                return false;
            }
        }

        return true;
    }
};

