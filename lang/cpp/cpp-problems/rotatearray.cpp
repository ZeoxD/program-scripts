#include<iostream>

using namespace std;

int main()
{
    int n,k,i;
    n=10;
    k=3;
    k=k%n;
    for(i=0; i<n; i++)
    {

        cout<<(i+(n-k))%n<<"\t";

    }
}