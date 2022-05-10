#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        short row = 0, col = 0;
        int count = 0;

        bool flag_break = false;
        for(auto &v: board) {
            col = 0;
            for(auto &c: v) {
                if(c == 'R') {
                    flag_break = true;
                    break;
                }
                col++;
            }

            if(flag_break) {
                break;
            }

            row++;
        }

        vector<int> rarr;
        vector<int> carr;

        for(short i = 0; i < board[row].size(); i++) {
            if(board[row][i] == 'p') {
                rarr.push_back(1);
            }
            if(board[row][i] == 'B') {
                rarr.push_back(0);
            }
            if(board[row][i] == 'R') {
                rarr.push_back(-1);
            }
        }

        for(short i = 0; i < board.size(); i++) {
            if(board[i][col] == 'p') {
                carr.push_back(1);
            }
            if(board[i][col] == 'B') {
                carr.push_back(0);
            }
            if(board[i][col] == 'R') {
                carr.push_back(-1);
            }
        }

        for(short i = 0; i<rarr.size()-1; i++) {
            if( (rarr[i] == 1 && rarr[i+1] == -1) || (rarr[i] == -1 && rarr[i+1] == 1) ) {
                count++;
            }
        }

        for(short i = 0; i<carr.size()-1; i++) {
            if( (carr[i] == 1 && carr[i+1] == -1) || (carr[i] == -1 && carr[i+1] == 1) ) {
                count++;
            }
        }


        return count;
    }
};