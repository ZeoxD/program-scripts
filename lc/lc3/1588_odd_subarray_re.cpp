#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0, size = arr.size();
        for(int i=0;i < size; i++) sum += ((i+1) * (size-i) + 1) / 2 * arr[i];
        return sum;
    }
};