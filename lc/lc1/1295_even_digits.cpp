#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int output = 0;
        for(auto n: nums) {
            int even_check=0;
            while(n>0) {
                    n = n/10;
                    even_check++;
            }
            if(even_check%2==0) {
                output++;
            }
        }
        return output;
    }
};