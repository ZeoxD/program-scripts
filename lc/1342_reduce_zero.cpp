#include<iostream>
#define tab "\t"
#define nl "\n"
using namespace std;

int main()
{
    int num = 123, count=0;
    while(num)
    {   
        if(num&1)
        {
            num--;
            count++;
        }
        else
        {
            num = num>>1;
            count++;
        }
    }
    cout<<count;
}