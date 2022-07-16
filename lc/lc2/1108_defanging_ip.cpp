#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        int size = address.size();

        for(int i = 0; i < size; i++) {
            if(address[i] == '.') {
                str += "[.]";
            }
            else {
                str += address[i];
            }
        }

        return str;
    }
};