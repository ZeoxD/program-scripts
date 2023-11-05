class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long l = 0, res = 0, size = nums.size();
        long total = 0;
        for(long r = 0; r < size; r++) {
            total += nums[r];
            while(nums[r]*(r-l+1) > total + k) {
                total -= nums[l];
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};
