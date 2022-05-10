#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        if (grid[0][0] < 0)
        {
            grid[0][0] = grid[0].size();
        }
        
        for(int i = 0 ; i<grid.size(); i++)
        {
            for(int j = 0; j<grid[0].size(); j++)
            {
                if(grid[i][0]<0) {
                    grid[0][0] += grid[i].size();
                }
                else if(grid[i][grid[0].size()-1] > 0){
                    break;
                }
                else{
                    int l = 0;
                    int h = grid[0].size();
                    
                    while(l<h)
                    {
                        int mid = (l + h) / 2;
                        
                        if(mid < 0)
                        {
                            h = mid-1;
                        }
                        if(mid > 0)
                        {
                            l = mid+1;
                        }
                    }
                }
            }
        } 
    }
};