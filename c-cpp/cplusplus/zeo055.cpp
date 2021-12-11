#include<iostream>
using namespace std;

int main()
{
    int cases, num1, num2, num3, large;
    cin>>cases;

    while(cases--)
    {
        cin>>num1;
        cin>>num2;
        cin>>num3;

        if(num1 > num2)
        {
            if(num1>num3)
            {
                num1 = 0;
            }
            else
            {
                num3 = 0;
            }
        }
        else
        {
            if(num2>num3)
            {
                num2 = 0;
            }
            else
            {
                num3 = 0;
            }   
        }


        if(num1 > num2)
        {
            if(num1>num3)
            {
                large = num1;
            }
            else
            {
                large = num3;
            }
        }
        else
        {
            if(num2>num3)
            {
                large = num2;
            }
            else
            {
                large = num3;
            } 
        }

        
        cout<<large<<endl;

    }

}