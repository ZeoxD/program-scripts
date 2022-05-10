#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int , int> um;
        for(auto &n: nums) {
            um[n]++;
        }           

        int arr[2];
        for(auto it= um.begin(); it!=um.end(); it++) {
            if(it->second > arr[0]) {
                arr[0] = it->second;
                arr[1] = it->first;
            }
        }   

        return arr[1];
    }
};