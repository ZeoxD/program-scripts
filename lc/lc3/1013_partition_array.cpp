#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int size = arr.size(), prefix = 0;
        for(int i = 0; i < size; i++) prefix += arr[i];
        if(prefix%3) return false; 
        else prefix/=3;
        int cp = 0, count = 0;
        for(int i = 0; i < size; i++) {
            cp += arr[i];
            if(cp == prefix || i == size-1 && cp>0) {
                ++count;
                cp = 0;
            }
        }
        if(count >= 3) return true;
        return false;
    }
};