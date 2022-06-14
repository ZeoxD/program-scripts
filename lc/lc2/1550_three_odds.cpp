#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i = 0, j = 0;
        int size = arr.size();
        bool flag = false;
        while(i < size) {
            if(arr[i] % 2 != 0) {
                j = i;
                while(j < size && arr[j] % 2 != 0 ) {
                    ++j;
                    if(j-i ==3) {
                        return true;
                    }
                }
            }
            if(flag) {
                break;
            }
            ++i;
        }
        

        return false;
    }
};