#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> nestvtr = {};
        vector<int> vtr;

        int minn = INT16_MAX;
        for(int i = 0; i<arr.size()-1; i++) {
            minn = min(minn, arr[i+1] - arr[i]);
        }
        
        for(int i = 0; i<arr.size()-1; i++) {
            
            if((arr[i+1] - arr[i]) == minn) {
                vtr.push_back(arr[i]);
                vtr.push_back(arr[i+1]);
            }
            if(vtr.size() == 2) {
                nestvtr.push_back(vtr);
                vtr.pop_back();
                vtr.pop_back();
            }
        }

        return nestvtr;
    }
};