#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string, int> um;
        vector<string> vtr;

        for(auto a: arr) {
            um[a]++;
        }

        for(auto a: arr) {
            if(um[a] == 1) {
                --k;
                if(k==0) {
                    return a;
                }
            }
        }

        return "";
    }
};
