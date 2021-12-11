#include<stdio.h>
main()
{
    char a,b,c;
    a = 'I';
    b = 'V';
    c = 'X';
    
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1 && n < 4)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c",a);
        }
        printf("\t");
    }

    if (n>=5 && n < 9)
    {
        printf("%c",b);
        for (int j = 5; j < n; j++)
        {
            printf("%c",a);
        }
        printf("\t");
    }

    if (n==4 || n==9)
    {
        printf("%c",a);
        if (n==4)
        {
            printf("%c",c);

        }
    }
    if (n>=10)
    {
        printf("%c",c);
        
        if (n>10 && n<14)
        {
            printf("%c",c);
            
            for ( int k = 10; k < n; k++)
            {            
                printf("%c",a);
            }
        }
        if (n>=15 && n<19)    
        {
                printf("%c",b);
                
                for (int r = 15; r < n; r++)
                {
                    printf("%c",a);
                }
            
        } 
        if (n==14||n==19)
        {
            printf("%c",a);
            if (n==14)
            {
                printf("%c",b);
            }
            else
            {
                printf("%c",c);
            }
            
        }
         
    }    
}        
        
        
        
    
    
