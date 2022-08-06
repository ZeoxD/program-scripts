#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size = arr.size();
        int count = 0;
        for(int i = 0; i < size; i++) {
            for(int j = i; j < size; j=j+2) {
                for(int k = i; k <= j; k++) {
                    count += arr[k];
                }
            }
        }  

        return count;  
    }
};