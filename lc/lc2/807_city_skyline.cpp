#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<int> r;
        vector<int> c;

        for(int i = 0; i < rows; i++) {
            int rmax = 0;
            int cmax = 0;
            for(int j = 0; j < cols; j++) {
                rmax = max(rmax, grid[i][j]);
                cmax = max(cmax, grid[j][i]);
            }

            r.push_back(rmax);
            c.push_back(cmax);
        }
        
        int val = 0;

        vector<vector<int>> dvtr(rows, vector<int>(cols, 0));
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                dvtr[i][j] = r[i] > c[j] ? c[j] : r[i];
                val += dvtr[i][j] - grid[i][j];
            }
        }

        
        return val;
    }
};