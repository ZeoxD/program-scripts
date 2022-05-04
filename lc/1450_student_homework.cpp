#include<iostream>
#include<vector>
#define AND &&
#define OR ||

using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int output = 0;
        for(int i = 0; i < startTime.size(); i++) {
            if(startTime[i] <= queryTime AND queryTime <= endTime[i]) {
                output++;
            }
        }      
        return output;
    }
};