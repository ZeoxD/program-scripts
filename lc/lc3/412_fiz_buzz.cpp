#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vs;
        string str;
        for(int i = 1; i <= n; i++) {
            if(!(i%3)) str += "Fizz";
            if(!(i%5)) str += "Buzz";
            if(i%5 && i%3) str += to_string(i);
            vs.push_back(str);
            str = "";
        }
        return vs;
    }
};