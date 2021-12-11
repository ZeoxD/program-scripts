#include<stdio.h>

main()
{
    int daynum;
    char ch;
    printf("Do you want to continue? [y/n]");
    scanf(" %c",&ch);
    while ( ch == 'y')
    {


    
    printf("enter the days=");
    scanf("%d",&daynum);
    switch(daynum)
    {
        case 1:
            printf("monday");
            break;
        case 2: 
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
            }
    printf("Do you want to continue? [y/n]");        
    scanf(" %c",&ch);
    }        
}