class Solution {
public:
    int binSearch(vector<int> &nums, int target, bool leftBias) {
        int l = 0, r = nums.size()-1, m, i = -1;
        while(l<=r) {
            m = l + (r-l)/2;
            if(target < nums[m]) {
                r = m - 1;
            }
            else if(target > nums[m]) {
                l = m + 1;
            }
            else {
                i = m;
                if(leftBias) {
                    r = m - 1;
                }
                else {
                    l = m + 1;
                }
            }
        }
        return i;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vtr;
        vtr.push_back(binSearch(nums, target, true));
        vtr.push_back(binSearch(nums, target, false));

        return vtr;
    }
};
