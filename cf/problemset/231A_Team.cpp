#include<bits/stdc++.h>

int main()
{
    int n, x, y, z, count=0;
    std::cin>>n;
    while(n--)
    {
        std::cin>>x>>y>>z;
        if(x+y+z >= 2)
        {
            count++;
        }
    }
    std::cout<<count;
}