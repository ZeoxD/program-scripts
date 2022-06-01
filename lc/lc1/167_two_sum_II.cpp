#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        vector<int> ans;

        for(int i = 0, j = size -1; i<j;) {
            if(numbers[i]+numbers[j] < target) {
                i++;
            }
            else if(numbers[i] + numbers[j] > target) {
                j--;
            }

            if(numbers[i] + numbers[j] == target) {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }

        return ans;
    }
};