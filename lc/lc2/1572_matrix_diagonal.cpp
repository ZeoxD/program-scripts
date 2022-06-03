#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();

        int maj_sum = 0, min_sum = 0;
        for(int i = 0; i < rows; i++) {
            maj_sum += mat[i][i];
            min_sum += mat[i][(rows-1)-i];

        }

        if(rows%2!=0) {
            return (maj_sum + min_sum) - mat[rows/2][rows/2];
        }

        return (maj_sum + min_sum);
    }
};
