#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    set<pair<int, int>> vis;
    int dfs(int i, int j, vector<vector<int>>& grid) {
        if(i < 0 || j < 0 || i > grid.size()-1 || j > grid[0].size()-1 || !grid[i][j] || vis.find({i,j}) != vis.end()) return 0;
        vis.insert({i, j});
        return 1 + dfs(i-1, j, grid) + dfs(i+1, j, grid) + dfs(i, j+1, grid) + dfs(i, j-1, grid);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int area = 0;
        for(int i=0; i<r; i++) {
            for(int j = 0; j < c; j++ ) {
                if(grid[i][j]) area = max(area, dfs(i,j, grid));
            }
        }

        return area;
    }
};