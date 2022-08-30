#include<iostream>
#include<string>
#include<set>
using namespace std;
class Solution {
public:
    string largestGoodInteger(string num) {
        int size = num.length();
        set<string> st; string s;
        for(int i = 1; i < size-1; i++) {
            if(num[i] == num[i-1] && num[i] == num[i+1]) {
                s += num[i]; s += num[i]; s += num[i]; st.insert(s);
            }
            s = "";
        }
        s = "";
        for(auto str: st) if(s < str) s = str;
        return s;
    }
};