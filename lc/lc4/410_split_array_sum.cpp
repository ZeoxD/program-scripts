class Solution {
public:
    bool splits(vector<int> &nums, int large, int k) {
        int sum = 0;
        int subArr = 1;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > large) {
                subArr += 1;
                sum = nums[i];
            }
        }
        return subArr <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int l = 0, r = 0, val;
        for(int i = 0; i < nums.size(); i++) {
            l = max(l, nums[i]);
            r += nums[i];
        }
        val = r;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(splits(nums, mid, k)) {
                val = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return val;
    }
};
