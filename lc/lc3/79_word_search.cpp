#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    set<pair<int, int>> path;
    bool dfs(vector<vector<char>> &board, string &word, int i, int j, int it) {
        if(it == word.size()) return true;
        if(i < 0 or j < 0 or i >= board.size() or j>=board[0].size() or 
        (path.find({i,j}) != path.end()) or word[it] != board[i][j] ) return false;
        cout<<(path.find({i,j}) != path.end());
        path.insert({i,j});
        bool res = (dfs(board, word, i+1, j, it+1) or
                   dfs(board, word, i, j+1, it+1) or
                   dfs(board, word, i-1, j, it+1) or
                   dfs(board, word, i, j-1, it+1));
        path.erase({i,j});
        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(word[0] == board[i][j] and dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};