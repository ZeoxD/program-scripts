#include<iostream>
using namespace std;

int main() {
    int j; 
    int arr[] = {3, 4, 1, 3};
    for(j = 5; j <=7; j++) {
        arr[j%3] = (arr[2]&4) & arr[3];
    }
    cout<<arr[2]+arr[3];
    return 0;
}