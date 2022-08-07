#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int mx = 0; int idx = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(mx < arr[i]) {
                mx = arr[i];
                idx = i;
            }
        }
        for(int i = 0; i < idx-1; i++) if(arr[i] > arr[i+1]) return false;
        for(int i = idx; i < arr.size(); i++) if(arr[i] < arr[i+1]) return false;
        return true;
    }
};