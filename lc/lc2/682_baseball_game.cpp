#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> stack;

        for(auto o: ops) {
            if(o[0] == '-') {
                int num = 0;
                for(auto c: o) {
                    if(c >= 48 && c <= 57) {
                        num = num * 10 + (int(c)-48);
                    }
                }
                stack.push_back(-1 * num);
            }
            else if(o[0] >= 48 && o[0] <= 57) {
                int num = 0;
                for(auto c: o) {
                    num = num * 10 + (int(c)-48);
                }
                stack.push_back(num);
            }
            else if(o[0] == 'C') {
                stack.pop_back();
            }
            else if(o[0] == 'D') {
                stack.push_back(stack[stack.size()-1]*2);
            }
            else if(o[0] == '+') {
                stack.push_back(stack[stack.size()-1]+stack[stack.size()-2]);
            }
        }
        
        for(const auto &s: stack) {
            cout<<s<<endl;
        }

        int val = 0;

        for(const auto &s: stack) {
            val += s;
        }

        return val;
    }
};