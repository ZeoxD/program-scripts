#include<iostream>
using namespace std;

int main()
{
    int cases, num, save, count;
    cin >> cases;

    int out[cases];

    for(int i=1;i<=cases;i++)
    {       
        count=0;
        cin>>num;
        for(int j=1; num!=0; j++)
        {
            save = num % 10;
            if(save == 4)
            {
                count++;
            }
            num = num / 10;
              
            }
        out[i-1]=count;
        
    }
    for(int i = 0;i<cases;i++)
    {
        cout<<out[i]<<endl;
    }

}