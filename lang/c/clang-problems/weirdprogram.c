#include<stdio.h>
main()
{
    int x=0;
    if(x++)
    {
        printf("programs runs successfully");
    }
    else if(x==1)
    {
        printf("runs in different way");
    }
    return 0;
}