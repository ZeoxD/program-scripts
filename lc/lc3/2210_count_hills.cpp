#include<iostream>
#include<vector>
#define vi vector<int>
#define pb push_back
#define s size()
using namespace std;
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int size = nums.s;
        vi hill;
        for(int i = 0; i < size-1; i++) {
            if(nums[i] == nums[i+1]) continue;
            else hill.pb(nums[i]);
        }
        hill.pb(nums[size-1]);
        int vall = 0;
        for(int i = 1; i < hill.s-1; i++) {
            if(hill[i] > hill[i-1] && hill[i] > hill[i+1]) ++vall;
            else if ( hill[i] < hill[i-1] && hill[i] < hill[i+1]) ++vall;
        }
        return vall;
    }
};