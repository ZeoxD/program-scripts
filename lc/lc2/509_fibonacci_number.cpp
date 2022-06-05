#include<iostream>

using namespace std;

class Solution {
public:
    int fib(int n) {
        
        if(n == 0) {
            return 0;
        }
        
        int vali = 0, valj = 1;
        int fib_sum = 1;
            
        for(int i = 1; i < n; i++) {
            fib_sum = vali + valj;
            vali = valj;
            valj = fib_sum;
            
        }

        return fib_sum;
    }
};