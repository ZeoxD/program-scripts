#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int s = arr.size(); int count = 0;
        for(int i = 0; i < s-2; i++) {
            for(int j = i+1; j < s-1; j++) {
                if(abs(arr[i] - arr[j]) <= a) {
                    for(int k = j+1; k < s; k++) {
                        if(abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) ++count;
                    }
                }
            }
        }
        return count;
    }
};