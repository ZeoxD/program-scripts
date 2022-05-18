#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        vector<char> vtr;

        for(const auto &n: number) {
            if(n>='0' && n<='9') {
                vtr.push_back(n);
            }
        }
        const int size = vtr.size();
        number = "";
        for(int i = 0; i<size; i++) {
            
            
            if(size%3 == 0) {
                
                number += vtr[i];
            
                if( (i+1) % 3 == 0  && i<size-1 ) {
                    number += '-';
                } 
            
            } 
            else {
                
                number += vtr[i];
            
                if( ( ( (i+1) % 3 == 0 && i<= size-3 ) || i == size-3 ) && i<size-1 ) {
                    number += '-';
                } 
                
            }
        }

        return number;
    }
};