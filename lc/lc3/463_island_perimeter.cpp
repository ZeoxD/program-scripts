#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {

public:
    set<pair<int, int>> vis;

    int dfs(int i, int j, vector<vector<int>> &grid) {
        if(i<0 || j<0 || i>grid.size()-1 || j>grid[0].size()-1 || !grid[i][j]) return 1;
        if(vis.find({i,j}) != vis.end() ) return 0;
        vis.insert({i,j});
        int per = dfs(i-1, j, grid) + dfs(i+1, j, grid) + dfs(i, j-1, grid) + dfs(i, j+1, grid);
        return per;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols ; j++) {
                if(grid[i][j]) return dfs(i, j, grid);
            }
        }
        return 0;
    }
};