#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> vtr;

        for(int i = 0; i <= n; i++) {
            int count = 0; 
            int temp = i;
            while(temp != 0) {
                temp = temp & (temp-1);
                count++;
            }
            vtr.push_back(count);
        }
        
        return vtr;
    }
};