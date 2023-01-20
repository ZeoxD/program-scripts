#include <iostream>
using namespace std;

long long squareSum(int n, int arr[]) {
    long long sum = 0;
    long long pw = 0;
    for(int i = 0 ; i< n; i++) {
        pw = arr[i] * arr[i];
        sum += pw;
        pw = 0;
    }
    
    return sum;
    
}

int main() {
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++) {
        cin>>arr[i];
    }
    cout<<squareSum(n, arr);
    return 0;
}
