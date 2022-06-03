#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix[0].size();
        int col = matrix.size();

        vector<vector<int>> dvtr(col, vector<int>(row));

        for(int i = 0; i < col; i++) {
            for(int j = 0; j < row; j++) {
                dvtr[j][i] = matrix[i][j];
            }
        }      

        return dvtr;
    }
};