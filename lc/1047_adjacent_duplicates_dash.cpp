#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {

        string snew;

        for(auto &c: s) {
            if( snew.size() && snew.back() == c ) {
                snew.pop_back();
            }
            else {
                snew.push_back(c);
            }

        }
        return snew;
    }
};