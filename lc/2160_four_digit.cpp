#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> vtr;
        
        while(num!=0) {
            vtr.push_back(num%10);
            num = num/10;
        }

        sort(vtr.begin(), vtr.end());

        for(auto &v: vtr) {
            cout<<v;
        }
        int sum = (vtr[0]*10 + vtr[2]) + (vtr[1]*10 + vtr[3]);
        
        return sum;
    }
};