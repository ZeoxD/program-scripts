#include <bits/stdc++.h>
using namespace std;

int arr[105],n,i=2;

int main()
{
    while(cin>>arr[n++]);
    sort(arr, arr+n);
    cout<<arr[1];
    for(;i<n;i++) cout<<'+'<<arr[i];
}