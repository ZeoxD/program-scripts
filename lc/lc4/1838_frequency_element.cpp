class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int l = 0, res = 0, tot = 0;
        for(int r = 0; r < nums.size(); r++) {
            int wl = r - l + 1;
            tot += nums[r];
            while(nums[r]*wl > tot + k) {
                tot -= nums[l];
                l += 1;
            }

            res = max(res, wl);
        }

        return res;
    }
};
