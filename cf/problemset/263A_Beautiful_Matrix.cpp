#include<bits/stdc++.h>

int main() 
{
    int i, j, a;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            std::cin>>a;
            if(a==1)
                std::cout<<abs(3-(i+1))+abs(3-(j+1));
        }
    }
}