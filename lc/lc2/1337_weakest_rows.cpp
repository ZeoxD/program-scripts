#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<pair<int, int>> vpr;
        int sum = 0;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                sum += mat[i][j];
            }
            vpr.push_back(make_pair(sum, i));
            sum = 0;
        }

        sort(vpr.begin(), vpr.end());
        vector<int> vtr;
        for(const auto v: vpr) {
            if(k==0) {
                break;
            }
            vtr.push_back(v.second);
            k--;

        }

        return vtr;
    }
};
