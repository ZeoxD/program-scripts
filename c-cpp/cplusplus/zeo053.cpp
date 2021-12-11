#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,20> data = {10,20,25,30,35,50,40};

    for(int i = 0; i<data.size(); i++)
    {
        cout<<data[i]<<endl;
    }
    return 0;

}