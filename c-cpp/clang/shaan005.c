#include<stdio.h>
main()
{
    int a,b,c;
    char ch;
    printf("enter the value");
    scanf("%d%c%d",&a,&c,&b);
    switch(ch)
    {
        case '+':
        {
            c=a+b;
            printf("%d",c);
            break;
        }
        case'-':
        {
            c=a+b;
            printf("%d",c);
            break;
        }
        case'x':
        {
            c=a*b;
            printf("%d",c);
            break;
        }
        case'%':
        {
            c=a%b;
            printf("%d",c);
            break;
        }
        case '/':
        {
            c=a/b;
            printf("%d",c);
            break;
        }
        default:
        {
            printf("wrong choice");
        }
    }
}
        
