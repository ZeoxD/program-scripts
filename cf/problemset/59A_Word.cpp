#include<bits/stdc++.h>

using namespace std;

int lowercount(char c)
{   
    int count=0;
    if(c>='a' and c<='z')
    {
        count++;
    }
    return count;
}

char tolower(char c)
{
    if(c>='A' and c<='Z')
    {
        c = c+32;
    }
    return c;
}

char toupper(char c)
{
    if(c>='a' and c<='z')
    {
        c = c-32;
    }
    return c;
}

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int aval = 0;
    for(char &cc: s)
    {
        aval += lowercount(cc);
    }

    if(l%2==0 and aval>=l/2)
    {   
        for (char &c: s)
        {
            c = tolower(c);
        }
    }
    else if(l%2!=0 and aval>l/2)
    {
        for (char &c: s)
        {
            c = tolower(c);
        }
    }
    else
    {
        for (char &c: s)
        {
            c = toupper(c);
        }
    }
    
    
    cout<<s;
    
}