#include<iostream>
using namespace std;

int main()
{
    int cases, num, save, reversed;
    cin >> cases;

    int out[cases];

    for(int i=1;i<=cases;i++)
    {       
        reversed = 0;
        cin>>num;
        for(int j=1; num!=0; j++)
        {
            save = num % 10;
            reversed = reversed * 10 + save ;
            num = num / 10;
              
            }
        out[i-1]=reversed;
        
    }
    for(int i = 0;i<cases;i++)
    {
        cout<<out[i]<<endl;
    }

}