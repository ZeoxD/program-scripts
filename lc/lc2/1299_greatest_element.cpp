#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        arr.push_back(-1);
        int size = arr.size();

        vector<int> vtr(size-1);
        int maxx = arr[size-1];
        for(int i = size-2; i >= 0; i--) {
            vtr[i] = maxx;
            if(arr[i] > maxx) {
                maxx = arr[i];
            }
        }

        return vtr;

    }
};