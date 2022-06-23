#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int val = 0;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                
                if(grid[i][j] != 0) {

                    int l = i-1 >= 0 ? grid[i-1][j] : 0;
                    int u = j-1 >= 0 ? grid[i][j-1] : 0;
                    int r = i+1 <= rows-1 ? grid[i+1][j] : 0;
                    int d = j+1 <= cols-1 ? grid[i][j+1] : 0;
                    
                    val += 2; 
                    
                    val += grid[i][j] - l > 0 ? grid[i][j] - l : 0;
                    val += grid[i][j] - r > 0 ? grid[i][j] - r : 0;
                    val += grid[i][j] - u > 0 ? grid[i][j] - u : 0;
                    val += grid[i][j] - d > 0 ? grid[i][j] - d : 0;
                }


            }
        }

        return val;
    }
};

