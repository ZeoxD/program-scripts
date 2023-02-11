class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, total  = 0;
        int val  = INT_MAX;
        
        for(int r = 0; r < nums.size(); r++) {
            total += nums[r];
            while(total >= target) {
                val = min(val, r-l+1);
                total -= nums[l];
                l++;
            }
        }
        
        if(val == INT_MAX) return 0;
        return val;
    }
};