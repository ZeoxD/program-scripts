#include<iostream>
#include<vector>

using namespace std;

class Solution {
    int bs(vector<int> v) {
        int size = v.size();
        int l=0, mid;
        while(l<=size) {
            mid = (l + (size - l))/2;
            if(mid < 0) {
                size = mid-1;
            }
            else if(mid > 0) {
                l = mid+1;
            }
        }
        cout<<mid;
        return mid;
    }
public:
    int countNegatives(vector<vector<int>>& grid) {
        int nve = 0;
        for(auto g: grid) {
            nve += bs(g);
        }

        return nve;
    }
};