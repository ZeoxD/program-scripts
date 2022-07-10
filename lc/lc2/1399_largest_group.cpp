#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> vtr(10, 0);

        for(int i = 1; i<=n; i++) {
            int temp = i;

            int sum = 0;
            while(temp>0) {
                sum += temp%10;
                temp = temp/10;
            }
            temp = sum;

            if(temp>=1 && temp<=9) {
                vtr[temp]++;
            }
        }


        for(const auto &v: vtr) {
            cout<<v<<" ";
        }

        int maxval = 0;
        int count = 0;
        for(int i = 1; i < 10; i++) {
            if(maxval < vtr[i]) {
                maxval = vtr[i];
            }
        }
        for(int i = 1; i < 10; i++) {
            if(maxval == vtr[i]) {
                ++count;
            }
        }

        return count;
    }
};