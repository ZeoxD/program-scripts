#include<iostream>
using namespace std;

int main()
{
    int T, A1, A2, A3, A4, A5, P;
    cin>>T;

    while(T--)
    {
        int TH = 0;
        cin>>A1>>A2>>A3>>A4>>A5;
        cin>>P;
        TH = A1+A2+A3+A4+A5;
        TH = TH * P;
        if (TH/24.0<=5)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes";
        }        

    }
}