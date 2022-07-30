#include<iostream>
using namespace std;
#define MOD4 10000
#define tab "\t"

int main()
{
    int sum = 0, user_input=0 , count = 0;
    cin>>user_input;
    for (int i = 1 ; i<MOD4; i++)
    {   int x = 1;
        while(x<=i){
            sum = sum + x;
            x++;
        } 
        user_input -= sum;
        if (user_input>=0)
        {
            count++;
        }
        else
            break;
    
        x=1;
        sum=0;
    }    

    cout<<count;
    
}