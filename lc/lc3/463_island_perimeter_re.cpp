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
        int rows = grid.size(), cols = grid[0].size();
        vector<int> vtr;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols ; j++) {
                if(grid[i][j] && !(vis.find({i,j}) != vis.end())) vtr.push_back(dfs(i, j, grid));
            }
        }
        
        for(auto v: vtr) {
            cout<<v<<endl;
        }
        return 0;
    }
};

int main() {
    vector<vector<int>> grid;
    grid = {{0,1,1,0}, 
            {1,1,0,1},
            {0,1,0,1},
            {0,1,0,1}};
    Solution s;
    s.islandPerimeter(grid);
}


