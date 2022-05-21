#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat[0].size();
        int n = mat.size();

        int count = 0; 
        int ans = 0;

        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(mat[i][j] == 1) {
                    for(int x = 0; x<m; x++) {
                        if(mat[i][x]==1){
                            count++;
                        }
                    }
                    for(int y = 0; y<n; y++) {
                        if(mat[y][j]==1) {
                            count++;
                        }
                    }

                    if(count==2) {
                        ans++;
                    }
                    count = 0;
                }
            }
        }
        
        return ans;

    }
};