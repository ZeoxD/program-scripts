#include<iostream>
using namespace std;

int main()
{
    int cases, num1, num2, remainder;
    cin >> cases;

    int output[cases];

    for (int i = 1; i <= cases; i++)
    {
        remainder=0;
        cin>>num1;
        cin>>num2;
        remainder = num1 % num2;
        output[i-1] = remainder;
    }

    for (int i = 0; i < cases; i++)
    {
        cout<<output[i]<<endl;
    }
    
    return 0;

}