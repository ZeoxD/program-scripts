class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vtr;

        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0) {
                vtr.push_back(index + 1);
            }
            nums[index] = -1*nums[index];
        }

        return vtr; 
    }
};
