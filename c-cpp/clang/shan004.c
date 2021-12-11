#include<stdio.h>


int main()
{   
    int i,n,count_prime=0;
    scanf("%f", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        { 
            count_prime++;
        }   
    }
    if (count_prime > 0 )
    {
        printf("Composite number");
    }
    else
    {
        printf("Prime Number");
    }
}    