#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string digitSum(string s, int k) {
        
        string snew;
        int flag = 0, temp = 0;

        while(s.length() > k) {
            for( const auto &c: s ) { 
                temp += int(c)-48;
                ++flag;

                if(flag == k) {
                    if(temp > 9) {
                        snew += char(temp/10 + 48);
                        snew += char(temp%10 + 48);
                    }
                    else {
                        snew += char(temp+48);
                    }
                        
                    flag = 0;
                    temp = 0;
                }

            }

            
            if(temp > 9) {
                snew += char(temp/10 + 48);
                snew += char(temp%10 + 48);
            }
            else if(temp>0) {
                snew += char(temp+48);
            }
            
            
            temp = 0;
            flag = 0;
            
            s = snew;
            snew = "";
        }

        return s;  
    }
};
 