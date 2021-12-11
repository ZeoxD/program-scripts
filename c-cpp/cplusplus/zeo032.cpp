#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int cases, num, count, temp;
    cin>>cases;
    int f,i,j;
    int sum[cases];

    for(i = 1; i <= cases; i++)
    {   
        count = 0;
        cin>>num;
        temp = num;
        for(j = 1; num != 0; j++)
        {
            num = num/10;
            count++;
        }
        num = temp;
        for(j = 1; num != 0; j++)
        {
            f = num % 10;
            num = num / pow(10,count-1);
            sum[i-1] = f + num;
            num = 0;
        }
    }

    for(i = 0; i < cases; i++)
    {
        cout<<sum[i]<<endl;
    }
    return 0;
}