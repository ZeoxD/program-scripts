#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();

        if(rows*cols != r*c) {
            return mat;
        }
        vector<int> vtr(rows*cols);
        vector<vector<int>> dvtr(r, vector<int>(c));

        for(int i = 0; i< rows; i++) {
            for(int j = 0; j < cols; j++) {
                vtr[(i*rows)+j] = mat[i][j];
            }
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                dvtr[i][j] = vtr[(i*r)+j];
            }
        }

        return dvtr;
    }
};