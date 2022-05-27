#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int size = nums.size();
        int lcount = 0, rcount = 0;

        int i,j;
        for(i = 0, j = size - 1; i-1<=j+1;) {
            
            if(lcount == 0 && rcount == 0) {
                lcount += nums[i++];
                rcount += nums[j--];
            }
            
            if(lcount <= rcount) {
                lcount += nums[i++];
            }
            if(lcount >= rcount) {
                rcount += nums[j--];
            }

            if(lcount == rcount && i == j) {
                return i;
            }
        }
        
        if(lcount <= rcount) {
            lcount += nums[i++];
        }
        if(lcount >= rcount) {
            rcount += nums[j--];
        }
    
        cout<<i<<" "<<j<<endl;
        cout<<lcount<<" "<<rcount<<endl;
        
        if(lcount == rcount && i == j) {
            return i;
        }

        return -1;
    }
};