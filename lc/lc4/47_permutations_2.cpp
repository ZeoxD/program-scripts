class Solution {
public:
    void dfs(vector<vector<int>> &res, vector<int> &perm, vector<int> &nums, map<int, int> &mp) {
        
        if(nums.size() == perm.size()) {
            res.push_back(perm);
            return;
        }

        for(auto it = mp.begin(); it != mp.end(); ++it) {
            if(it->second > 0) {
                perm.push_back(it->first);
                it->second -= 1;
                dfs(res, perm, nums, mp);
                perm.pop_back();
                it->second += 1;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> perm;
        map<int, int> mp;
        for(const auto &n: nums) {
            mp[n] += 1;
        }
        dfs(res, perm, nums, mp);
        return res;
    }
};
