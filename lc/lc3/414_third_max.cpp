#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(const auto &n: nums) {
            s.insert(n);
            if(s.size() > 3) {
                s.erase(s.begin());
            }
        }
        if(s.size() < 3) return *s.rbegin();
        return *s.begin();
    }
};