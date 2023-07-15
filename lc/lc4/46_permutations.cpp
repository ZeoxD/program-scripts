#include<iostream>
#include<vector>
#define pb push_back
#define ppb pop_back

using namespace std;

class Solution {
public:
    
    void bt(vector<vector<int>> &res, vector<int> &nums, vector<int> &perms, vector<bool> &visited) { 
        if(perms.size() == nums.size()) {
            res.pb(perms);
            return;
        }
        for(int i = 0; i < nums.size(); ++i) {
            if(visited[i] != true) {
                visited[i] = true;
                perms.pb(nums[i]);
                bt(res,nums,perms,visited);
                visited[i] = false;
                perms.ppb();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> perms;
        vector<bool> visited(nums.size());
        bt(res, nums, perms, visited);
        return res;
    }
};
