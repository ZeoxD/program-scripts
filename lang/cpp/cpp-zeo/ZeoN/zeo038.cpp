#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num%4==0)
    {
        num = num + 1;
    }
    else
    {
        num = num - 1;
    }
    
    cout<< num;
}
