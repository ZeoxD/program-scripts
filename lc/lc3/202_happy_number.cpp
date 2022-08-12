#include<iostream>
#include<set>
using namespace std;

class Solution {
    int sumdig(int n) {
        int sum = 0;
        while(n!=0) {
            sum += (n%10) * (n%10);
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        set<int> st;
        while(n!=1) {
            st.insert(n);
            n = sumdig(n);
            if(st.find(n) != st.end()) {
                return false;
            }
        }
        return true;
    }
};