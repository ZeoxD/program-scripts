#include<iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int bases, ans;

    while(cases--)
    {
        cin >> bases;

        if ( bases % 2 == 0 )
        {
            ans = (bases * bases)/2;
            ans = (ans - bases)/4;
        }
        else
        {
            bases--;
            ans = (bases * bases)/2;
            ans = (ans - bases)/4;
        }


        cout << ans << endl;
    }
}