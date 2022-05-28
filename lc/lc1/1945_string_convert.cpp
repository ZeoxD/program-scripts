#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string ns = "";

        for(const auto &c: s) {
            ns += char(int(c-'a') + 1 + 48);
        }

        cout<<ns;

        int val;
        while(k--) {

            val = 0;
            for(const auto &nc: ns) {
                val += int(nc)-48;
            }

            ns = "";
            while(val>0) {
                ns += char(val%10);
                val = val/10;
            }

        }

        cout<<ns;

        val = 0;
        for(const auto &c: ns) {
            val = val*10 + int(c-48);
        }

        return val;
    }
};