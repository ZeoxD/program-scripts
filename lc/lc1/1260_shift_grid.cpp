#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> vtr(rows, vector<int>(cols));

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                vtr[(i+((j+k)/cols))%rows][(j+k)%cols] = grid[i][j];
            }
        }

        return vtr;
    }
};