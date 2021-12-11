#include<bits/stdc++.h>
#define AND &&
#define OR ||

int main()
{
    int n, m;
    std::cin>>n>>m;

    if(n%2!=0 AND n>=3 AND m>=3)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(  i%2==0  OR  ( (i%2!=0) AND (j == m-1) AND !i%4!=0) OR ( (i%4!=0) AND (j == 0) ) ) 
                {
                    std::cout<<"#";
                }   
                
                else
                
                {
                    std::cout<<".";
                }

            }

            std::cout<<"\n";
        }
    }

}