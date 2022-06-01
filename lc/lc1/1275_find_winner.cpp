#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        
        int size = moves.size();
        vector<vector<int>> dvtr(3, vector<int>(3, -1));

        for(int i = 0; i < size; i++) {
            if(i%2 == 0) {
                dvtr[moves[i][0]][moves[i][1]] = 1;
            }
            else {
                dvtr[moves[i][0]][moves[i][1]] = 0;
            }
        }
        int row = 0, col = 0, diag = 0, antidiag = 0;
        for(int i = 0; i<3; i++) {
            for(int j = 0; j<3; j++) {
                row += dvtr[i][j];
                col += dvtr[j][i];
            }

            diag += dvtr[i][i];
            antidiag += dvtr[i][2-i];

            if(row == 3 || col == 3) {
                return "A";
            }
            else if(row == 0 || col == 0) {
                return "B";
            }

            row = 0;
            col = 0;
        }

        if(diag == 3 || antidiag == 3) {
            return "A";
        }
        else if(diag == 0 || antidiag == 0) {
            return "B";
        }

        if(size < 9) {
            return "Pending";
        }

        return "Draw";
    }
};
