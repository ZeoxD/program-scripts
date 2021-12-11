#include<stdio.h>
main()
{
    int a,b,c;
    char ch;
    
        printf("enter two number");
        scanf("%d%c%d",&a,&ch,&b);
        switch(ch)
        {
            case '+':
            {
                c=a+b;
                pritnf("%d",c);
                break;
            }
            case '-':
            {
                c=a-b;
                printf("%d",c);
                break;
            }
            case '*':
            {
                c=a*b;
                printf("%d",c);
                break;

            }
            case '/':
            {
                c=a/b;
                printf("%d",c);
                break;
            }

        }   
        
    
}    
