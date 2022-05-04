#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector<vector<int>> arr(3, vector<int> (101, 0));

        for(auto n1: nums1) {
            arr[0][n1] = 1;
        }

        for(auto n2: nums2) {
            arr[1][n2] = 1;
        }

        for(auto n3: nums3) {
            arr[2][n3] = 1;
        }

        vector<int> vtr;

        for(int i = 0; i<101; i++) {
            
            if(arr[0][i] + arr[1][i] + arr[2][i] > 0) {
                cout<<arr[0][i]<<" "<<arr[1][i]<<" "<<arr[2][i]<<endl;
            }

            if(arr[0][i] + arr[1][i] + arr[2][i] > 1) {
                vtr.push_back(i);
            }

        }
        
        return vtr;
    }
};