#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int per = 0;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    
                    if(grid.size() ==1 && grid[0].size() == 1) {
                        return 4;
                    }
                    else if(grid[0].size() == 1 || grid.size()-1 ==1) {
                        if(i==0 || (j>0 && j<grid[0].size()-1)) {
                            per += 4 - grid[i][j-1]+grid[i][j+1];
                        }
                        else if(j==0 || (i>0 && i<grid[0].size()-1)) {
                            per += 4 - grid[i-1][j]+grid[i+1][j];
                        }
                        if(i==0 && j == 0) {
                            per += 4- grid[i][j+1];
                        }
                        
                        if(i == grid.size()-1 && j == 0)) {
                            per += 4 - grid[i-1][j];
                        }
                    }                   

                    if(i == 0 || i == grid.size()-1) {
                        per++;
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    }
                    if(j == 0 || j == grid[0].size()-1) {
                        per++;
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    } 

                    if(i==0 && j==0) {
                        per += 2 - (grid[i+1][j] + grid[i][j+1]);
                    }
                    if(i==grid.size()-1 && j==0) {
                        per += 2 - (grid[i-1][j] + grid[i][j+1]);
                    }
                    if(i==grid.size()-1 && j==grid[0].size()-1) {
                        per += 2 - (grid[i-1][j] + grid[i][j-1]);
                    }
                    if(i==0 && j==grid[0].size()-1) {
                        per += 2 - (grid[i+1][j] + grid[i][j-1]);
                    }

                    else if(i == 0 && (j>0 && j<grid[0].size()-1) ) {
                        per += 3 - (grid[i+1][j] + grid[i][j-1] + grid[i][j+1]);
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    }
                    
                    else if(i == grid.size()-1 && (j>0 && j<grid[0].size()-1) ) {
                        per += 3 - (grid[i-1][j] + grid[i][j-1] + grid[i][j+1]);
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    }

                    else if((i>0 && i<grid.size()-1) && j==0) {
                        per += 3 - (grid[i+1][j] + grid[i-1][j] + grid[i][j+1]);
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    }
                    
                    else if ((i>0 && i<grid.size()-1) && j==grid[0].size()-1) {
                        per += 3 - (grid[i+1][j] + grid[i-1][j] + grid[i][j-1]);
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    }                    

                    else if(i>0 && j>0 && i<grid.size()-1 && j<grid[0].size()-1) {
                        per += 4 - (grid[i-1][j] + grid[i+1][j] + grid[i][j-1] + grid[i][j+1]);
                        cout<<i<<" "<<j<<" = "<<per<<endl;
                    }  
                }               
            }
        }  

        return per;
    }
};