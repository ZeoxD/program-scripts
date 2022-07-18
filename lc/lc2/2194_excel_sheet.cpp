#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> vstr;
        int lo = s[0], ro = s[3];
        int li = s[1], ri = s[4];

        cout<<lo<<li<<":"<<ro<<ri;
        for(int i = lo; i < ro; i++) {
            for(int j = li; j < ri; j++) {
                string str; 
                str += char(i) + char(j);
                cout<<str;
                vstr.push_back(str);
            }
        }
        return vstr;
    }
};
