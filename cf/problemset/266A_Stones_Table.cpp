#include<bits/stdc++.h>

int main()
{
    int n, c=0, i=0;
    std::string s;
    std::cin>>n>>s;
    for(i = 1 ; i<n; i++)
    {
        if(s[i] == s[i-1])
            c++;
    }
    std::cout<<c;
}