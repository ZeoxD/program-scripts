#include<iostream>
using namespace std;

class Solution {

private:
    int digSum(int n) {

        if(n == 0) {
            return 0;
        }

        return ((n%10) + digSum(n/10));
    }

    int digPro(int n) {
        if(n == 0) {
            return 1;
        }
        
        return (n%10) * digPro(n/10);
    }

public:
    int subtractProductAndSum(int n) {
        return digPro(n) - digSum(n);    
    }
};