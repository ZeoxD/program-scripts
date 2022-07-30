#include<iostream>
#include<string>
#define tab "\t"
using namespace std;

int main()
{
    string s; 
    int check=1,check_d=1;
    cin>>s;
    for(int i = 0; i < s.length(); i++)
    {   
        
        if(check>check_d)
        {
            check_d = check;

        }
        check=1;
        for(int j = i ; j<s.length(); j++)
        {
               if(s[j]==s[j+1]){
                ++check;
            }
            else
            {
                break;
            }
            
        }

    }

    if(check_d>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

}