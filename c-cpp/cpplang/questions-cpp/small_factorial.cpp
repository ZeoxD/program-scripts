#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T,N;
    long long fact=1;
    cin>>T;
    while(T--)
    {   
        fact = 1;
        cin>>N;
        if(N>=0 && N<=20)
        {
            for(int i = 1; i<=N ; i++)
            {
                fact *= i;
            }
        }
        cout<<fact<<"\n";
    }
}