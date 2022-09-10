#include<iostream>
using namespace std;

int main()
{
    int numA;
    int numB;

    cin>>numA;
    cin>>numB;

    if (numA>numB)
    {
        numA = numA - numB;
    }
    else
    {
        numA = numA + numB;
    }
    
    cout<<numA;

    return 0;
    
}