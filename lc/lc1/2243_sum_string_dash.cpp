#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string digitSum(string s, int k) {
        
        string ans;

        while(s.length() > k) {
            
            int sum = 0;

            for(int i = 0; i < s.length(); i++) {
                
                if(i!=0 && i%k == 0) {
                    ans += to_string(sum);
                    sum = 0;
                }

                sum += int(s[i] - '0' );
                
            }

            ans += to_string(sum);
            s = ans;
            ans = "";

        }

        return s;
        
    }
};
 