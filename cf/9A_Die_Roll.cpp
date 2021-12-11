#include<iostream>
using namespace std;

int main()
{
    const int die_roll = 6;
    int y, w;
    cin>>y>>w;

    y = (y>w) ? y : w;
    if (y<=1)
    {
        cout<<"1/1";
    }
    else if(y>=6)
    {
        cout<<"0/1";
    }
    else
    {
        cout<< die_roll - (y-1)/(y-1) << "/" << die_roll/(y-1); 
    }
    
    

    return 0;
}