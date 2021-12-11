#include<stdio.h>
main ()
{
    int i,n,c,a=0,b=1;
    printf("enter the number of terms ");
    scanf("%d",&n);
    printf(" %d\n %d\n ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n ",c);
    
    }
}