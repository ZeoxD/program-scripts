#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> vtr(2000, 0);
        int size = arr.size();

        for(int i = 0; i < size; i++) {
            vtr[arr[i]-1]++;
        }
                     
        int flag = 0;

        for(int i = 0; i < 2000; ++i) {
            if(vtr[i] == 0) {
                --k;
            }
            if(k==0) {
                flag = i;
                break;
            }
        }

        return flag+1;
    }
};
