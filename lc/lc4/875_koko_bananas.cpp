class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1, k;
        for(auto i: piles) {
            if(r < i) r = i;
        }
        int res = INT_MAX;
        while(l<=r) {
            k = l + (r-l)/2;
            long hours = 0;
            for(auto it: piles) {
                if(it%k==0) {
                    hours += it/k;
                }
                else hours += it/k + 1;
            }
            if(hours <= h) {
                res = min(res, k);
                r = k - 1;
            }
            else {
                l = k + 1;
            }
        }
        return res;
    }
};
