#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {

        int rows = rowSum.size();
        int cols = colSum.size();
        vector<vector<int>> vtr( rows, vector<int>( cols ) );

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                vtr[i][j] = min(rowSum[i], colSum[j]);

                rowSum[i] = rowSum[i] - vtr[i][j];
                colSum[j] = colSum[j] - vtr[i][j];
            }
        }

        return vtr;
        
    }
};