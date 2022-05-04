#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        vector<int> vtr(grid.size()*grid[0].size());

        int col = grid.size();
        int row = grid[0].size();
        int gmax = 0, count = 0, zeroes = 0;
        for(int i = 0; i<col; i++) {

            for(int j = 0; j<row; j++) {
                if (grid[i][j] == 0) {
                    zeroes++;
                }

                gmax = max(gmax, grid[i][j]);
            }
            count += gmax;
            gmax = 0;
        }
        for(int j = 0; j<row; j++) {
            for(int i = 0; i<col; i++) {
                gmax = max(gmax, grid[i][j]);
            }
            count += gmax;
            gmax = 0;
        }

        count += row*col - zeroes;

        return count;
    }
};
