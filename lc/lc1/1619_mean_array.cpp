#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        int size = arr.size();
        int ends = (5/100)/size;   
        int sum = 0;
        double avg = 0.0f; 
        
        for(int i = 0 + ends; i < size - ends; i++) {
            sum += arr[i];
        }

        avg = double(sum) / double(size - (2*ends));
        
        return avg;
    }
};