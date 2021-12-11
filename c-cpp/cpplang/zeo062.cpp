#include<iostream>
using namespace std;

int main()
{
    int T, i, won = 0,lost = 0;
    string S;
    cin>>T;

    while(T--)
    {   
        cin>>S;
        won = 0,lost = 0;
        i=0;
        while(i < S.length())
        {
            if(S[i] == '1')
            {
                won++;
            }
            else
            {
                lost++;
            }
            
            if ( (won > 10||lost > 10) && ( abs(won-lost) == 2) )
            {
                break;
            }
            
            i++;   
        }

        if ( won > lost )
        {
            cout<<"WIN"<<endl;
        }
        else
        {
            cout<<"LOSE"<<endl;
        }

    } 
}