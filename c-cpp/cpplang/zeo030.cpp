#include<iostream>
using namespace std;

int main()
{
    int cases, divisor,count = 0;
    cin >> cases >> divisor;
    int num;

    for(int i = 1; i <= cases; i++)
    {
        cin >> num;
        if(num % divisor == 0)
        {
            count++;
        } 
    }
    cout<<count;
}