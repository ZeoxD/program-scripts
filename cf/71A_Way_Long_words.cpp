#include<iostream>
#include<string>
#define nl "\n"

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string w;
        cin>>w;
        int l = w.length();
        if (l > 10){
            cout<<w[0]<< l-2 <<w[l-1]<<nl;
        }
        else cout<<w<<nl;
    }
}