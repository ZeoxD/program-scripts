#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> vtre;
        vector<int> vtro;

        for(auto n: nums) {
            if(n % 2 == 0) {
                vtre.push_back(n);
            }
            else {
                vtro.push_back(n);
            }
        }

        int a = 0, b = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(i%2 == 0) {
                nums[i] = vtre[a++];
            }
            else {
                nums[i] = vtro[b++];
            }
        }

        return nums;

    }
};