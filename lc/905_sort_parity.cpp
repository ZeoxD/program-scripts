#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;

        for(auto &n: nums) {
            if(n%2 == 0) {
                even.push_back(n);
            }
            else {
                odd.push_back(n);
            }
        }

        for(auto &o: odd) {
            even.push_back(o);
        }

        return even;
    }
};