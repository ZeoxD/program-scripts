#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row = matrix[0].size();
        int col = matrix.size();

        unordered_map<int, int> umr;
        unordered_map<int, int> umc;

        for(int i = 0; i < col; i++) {
            
            for(int j = 0; j < row; j++) {
                umr[matrix[i][j]]++;
                umc[matrix[j][i]]++;
            }

            for(int k = 1; k <= row; k++) {
                if(umr.count(k) == 0 || umc.count(k) == 0) {
                    return false;
                }
            }

            umr.clear();
            umc.clear();
        }

        return true;
    }
};