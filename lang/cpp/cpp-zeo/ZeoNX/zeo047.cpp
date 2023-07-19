#include<iostream>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    int A,B;

    while(cases--)
    {
        cin>>A;
        cin>>B;

        if (A > B)
        {
            cout<<">"<<endl;
        }
        else if (A < B)
        {
            cout<<"<"<<endl;
        }
        else if (A == B)
        {
            cout<<"="<<endl;
        }
        
    }
    
}