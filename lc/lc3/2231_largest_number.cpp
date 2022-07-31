#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:
    int largestInteger(int num) {
        vector<int> dig;
        vector<int> odd;
        vector<int> even;
        while(num!=0) {
            dig.push_back(num%10);
            num/=10;
        }
        for(auto d: dig) {
            if(d%2) odd.push_back(d);
            else even.push_back(d);
        }
                
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        reverse(dig.begin(), dig.end());
        
        for(int i = 0; i < dig.size(); i++) {
            if(dig[i]%2 && odd.size()) {
                dig[i] = odd[odd.size()-1];
                odd.pop_back();
            }
            else {
                dig[i] = even[even.size()-1];
                even.pop_back();
            }
        }
        int val = 0;
        for(int i = 0; i < dig.size(); i++) {
            val = val*10 + dig[i];
        }        

        return val;
    }
};