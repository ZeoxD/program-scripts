#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][i] == 0 || grid[i][cols-1-i] == 0) return false;
                if(grid[i][j] != 0 && i!=j && j != cols-1-i) return false;
            }
        }

        return true;
    }
};