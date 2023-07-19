#include<iostream>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    int base,occupy;

    for (int i = 0; i < cases; i++)
    {
        cin>>base;
        if (base%2!=0)
        {
            base--;
        }
        
        occupy = (base*2) - (base/2);
        occupy = occupy/2;
    
        cout<<occupy<<endl;
    }
    
}