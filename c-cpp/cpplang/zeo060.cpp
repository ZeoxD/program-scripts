#include<iostream>
using namespace std;

int main()
{
    int num;
    double deci;

    cin>>num>>deci;

    if (num%5==0 && num<(deci-0.5))
    {
        cout<<(deci-0.5) - num;
    }                           
    else
    {   

        cout<<deci<<endl;
    }

}