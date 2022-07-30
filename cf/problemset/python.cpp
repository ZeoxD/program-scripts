#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1, x2, y1, y2, dis;
    int N;
    cin>>N;
    while(N--)
    {
        double a, b;
        cin>>a>>b;
        if(a!=0)
        {
            x1 = min(x1,a);
            x2 = max(x2,a);
        }
        else
        {
            y1 = min (y1, b);
            y2 = max (y2, b);
        }
    }

    dis = abs(min(x1,y1)) + abs(max(x2,y2));
    printf("%.10f", dis);
}