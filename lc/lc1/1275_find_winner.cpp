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
    }
};