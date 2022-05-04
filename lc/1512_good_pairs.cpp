#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++) {
            for(int j = i ; j < nums.size(); j++) {
                if(nums[i] == nums[j] && i < j) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> num { 1,2,3,1,1,3};
    cout<<s.numIdenticalPairs(num);

}