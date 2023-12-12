class Solution {
public:
    int maxArea(vector<int>& height) {
        int amount = 0, result = 0;
        int l = 0, r = height.size()-1;
        while(l < r) {
            int val = min(height[l], height[r]);
            amount = val* (r-l);
            if(height[l] <= height[r]) {
                l++;
            }
            else {
                r--;
            }
            result = max(result, amount);
        }
        return result;
    }
};
