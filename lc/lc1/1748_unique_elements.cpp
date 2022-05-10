#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> hashing(101, 0);
        int sum = 0;

        for(auto n: nums) {
            hashing[n]++;
        }

        for(int i = 1; i < 101; i++) {
            if(hashing[i] == 1) {
                sum += i;
            }
        }

        return sum;
    }
};