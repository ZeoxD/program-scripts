#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int origin[2] = {0, 0};
        for(auto &m: moves) {
            if(m == 'L')
            {
                origin[0]--;
            }
            else if(m == 'R') {
                origin[0]++;
            }
            else if(m== 'U') {
                origin[1]++;
            }
            else {
                origin[1]--;
            }
        }

        if(!origin[0] && !origin[1]) {
            return true;
        }
        
        return false;
    }
};