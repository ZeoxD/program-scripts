#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size();

        int ptra = 0, ptrb = size - 1;

        while(ptra <= ptrb) {

            if(arr[ptra] < arr[ptra+1]) {
                ++ptra;
            }

            if(arr[ptrb-1] > arr[ptrb]) {
                --ptrb;
            }

            if(ptra == ptrb) {
                return ptra;
            }
            else if(arr[ptra] > arr[ptra+1] && arr[ptrb-1] < arr[ptrb]) {
                return 0;
            }


        }

        return 1;
    }
};