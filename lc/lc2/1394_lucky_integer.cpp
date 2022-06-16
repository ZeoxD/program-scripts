#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> um;

        for(auto a: arr) {
            um[a]++;
        }
        arr.clear();
        for(auto it = um.begin(); it != um.end(); it++) {
            if(it->first == it->second) {
                arr.push_back(it->first);
            }
        }
        if(arr.size() == 0) {
            return false;
        }
        sort(arr.begin(), arr.end());

        return arr[arr.size()-1];
    }
};