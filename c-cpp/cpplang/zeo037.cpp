#include<iostream>

using namespace std;

int main()
{
    int cases, num;
    unsigned long long fact;

    cin>> cases;

    int save[cases];

    for (int i = 1; i <= cases; i++)
    {
        fact = 1;
        cin>>num;
        for(int j = num; j >= 1; j--)
        {
            fact = fact * j;
        }
        save[i-1] = fact;
    }
    
    for(int i = 0; i < cases; i++)
    {
        cout<<save[i]<<endl;
    }
}