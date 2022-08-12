#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vtr;
        while(num) {
            vtr.push_back(num%10);
            num/=10;
        }
        int sum = 0;
        for(int i = vtr.size()-1; ~i; --i) {
            if(vtr[i] == 6) {
                vtr[i] = 9;
                break;
            } 
        }

        for(int i = vtr.size() -1; ~i; --i) {
            sum = sum * 10 + vtr[i];
        }

        return sum;
    }
};