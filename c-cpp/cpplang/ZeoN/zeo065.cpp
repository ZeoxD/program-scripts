#include<iostream>
using namespace std;

int main()
{
    int t,n,a[200],i,j,k,l,m;
    cin>>t;
    while(t--)
    {
	    cin>>n;
        m=1;
        a[0]=1;
        for(j=2;j<=n;j++)
        {
            l=0;
            for(k=0;k<m;k++)
            {
                a[k]=a[k]*j+l;
                l=a[k]/10;
                a[k]=a[k]%10;
            }
            while(l)
            {
	            a[k]=l%10;
                k++;
                m++;
                l=l/10;
            }
        
        }

        for(i=m-1;i>=0;i--)
        {
            cout<<a[i];
        }
    cout<<endl;
    }

    return 0;
}