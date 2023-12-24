class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        const long MOD = 1000000007;
        stack<pair<int, long>> st;
        long res = 0;
        int init;
        vector<long> prefix(nums.size()+1);
        
        for(int i = 1; i <= nums.size(); i++) {
            prefix[i] = prefix[i-1] + nums[i-1];
        }

        for(int i = 0; i < nums.size(); i++) {
            init = i;
            while(!st.empty() && st.top().second > nums[i]) {
                int index = st.top().first;
                long value = st.top().second;
                init = index;
                res = max(res, value*(prefix[i] - prefix[index]));
                st.pop();
            }

            st.push({init, nums[i]});
        }

        while(!st.empty()) {
            int index = st.top().first;
            long value = st.top().second;
            res = max(res, value*(prefix[nums.size()] - prefix[index]));
            st.pop();
        }
        return res%MOD;
    }
};
