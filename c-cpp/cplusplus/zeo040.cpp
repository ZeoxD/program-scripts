#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int cases, num;
    cin>>cases;

    for (int i = 0; i < cases; i++)
    {
        cin>>num;

        num = sqrt(num);

        cout<<num<<endl;
    }
    
}