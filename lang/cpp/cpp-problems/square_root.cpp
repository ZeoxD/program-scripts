#include <iostream>
using namespace std;

int isSquare(int num) {
    if(num==0 or num==1) {
        return num;
    }
    int start = 1, end = num/2, res;
    while(start<=end) {
        int mid = start + (end-start)/2;
        if(mid*mid == num) {
            return mid;
        }
        
        if(mid*mid <= num) {
            start = mid + 1;
            res = mid;
        }
        else {
            end = mid - 1;
        }
    }
    return res;
}

int main() {
    int root;
    cin>>root;
    int sq = isSquare(root);
    cout<<sq;

    return 0;
}
