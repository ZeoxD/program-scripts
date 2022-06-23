#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_map<int, int> rm;
        vector<int> vtr;
        
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i = 0; i < rows; i++) {
            int minval = INT32_MAX;
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] < minval) minval = matrix[i][j];
            }
            rm[minval]++;
        }
        

        for(int i = 0; i < cols; i++) {
            int maxval = 0;
            for(int j = 0; j < rows; j++) {
                if(matrix[j][i] > maxval) maxval = matrix[j][i];
            }
            if(rm[maxval] == 1) {
                vtr.push_back(maxval);
            }
        }
        
        return vtr;

    }
};