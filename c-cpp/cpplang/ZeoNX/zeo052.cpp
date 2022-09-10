#include<iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int num;


    while(cases--)
    {   
        count=0;
        cin>>num;

        if(num % 5 == 0)
        {
            if (num % 2 == 0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
            
        }
        else
        {
            cout<<"-1";
        }
        
    } 

}