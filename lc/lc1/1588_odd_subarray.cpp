#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int odd_sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            int j;
            if((arr.size()-i)%2==0) j = (arr.size()-i)-1;
            else j = arr.size()-i;

            for(; j >= i; j = j-2) {
                for(int k = i; k<j; k++) {
                    odd_sum += arr[k];
                }
            }
        }

        return odd_sum;
    }
};