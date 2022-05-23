#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        int size = nums.size();
        vector<int> vtro;
        vector<int> vtre;

        for(int i = 0; i<size; i++) {
            if(i % 2 == 0) {
                vtre.push_back(nums[i]);
            }
            else {
                vtro.push_back(nums[i]);
            }
        }

        sort(vtre.begin(), vtre.end());
        sort(vtro.begin(), vtro.end());

        int o = vtro.size()-1, e = 0;
        for(int i = 0; i<size; i++) {
            if(i%2 == 0 && e<vtre.size()) {
                nums[i] = vtre[e++];
            }
            else if(i%2 != 0 && o>=0) {
                nums[i] = vtro[o--];
            }
        }

        return nums;
    }
};