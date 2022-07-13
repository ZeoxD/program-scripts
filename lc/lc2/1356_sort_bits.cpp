#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> vtr(15);

        sort(arr.begin(), arr.end());
        for(auto a: arr) {
            int count = 0;
            int temp = a;
            while(temp != 0) {
                temp = temp & (temp-1);
                count++;
            }
            vtr[count].push_back(a);
        }

        vector<int> sorted;

        for(const auto &v: vtr) {
            for(auto a: v) {
                sorted.push_back(a);
            }
        }

        return sorted;
    }
};