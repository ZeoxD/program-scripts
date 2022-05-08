#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        bool arr[2][2001];
        
        for(int i = 0; i<2001; i++){
            arr[0][i] = false;
            arr[1][i] = false;
        }

        for(auto n1: nums1) {
            arr[0][n1+1000] = true;
        }

        for(auto n2: nums2) {
            arr[1][n2+1000] = true;
        }

        vector<vector<int>> nestvtr;
        vector<int> vtra;
        vector<int> vtrb;

        for(int i = 0; i<2001; i++) {
            if((arr[0][i] || arr[1][i]) && !(arr[0][i] && arr[1][i]) ) {
                if(arr[0][i]) {
                    vtra.push_back(i-1000);
                }

                if(arr[1][i]) {
                    vtrb.push_back(i-1000);
                }
            }
        }

        nestvtr.push_back(vtra);
        nestvtr.push_back(vtrb);

        return nestvtr;

    }
};