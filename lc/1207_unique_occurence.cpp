#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int arrx[2001];

        for(int i = 0; i<2001; i++) {
            arrx[i] = 0;
        }

        for(auto &a: arr) {
            if(a<=0) {
                arrx[-a]++;
            }
            else {
                arrx[a+1000]++;
            }
        }

        int arro[1000];

        for(int i = 0; i<1000; i++) {
            arro[i] = 0;
        }

        for(auto &a: arrx) {
            if(a>0) {
                arro[a]++;
            }
        }

        for(int i = 0; i<1000; i++) {
            if(arro[i]>1) {
                return false;
            }
        }


        return true;
    }
};