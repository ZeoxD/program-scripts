#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int col = 0;

        for(int i = 0; i<strs[0].length(); i++) {
            for(int j = 0; j<strs.size()-1; j++) {
                if(strs[j][i] > strs[j+1][i]) {
                    col++;
                    break;
                } 
            }
        }      

        return col;
    }
};