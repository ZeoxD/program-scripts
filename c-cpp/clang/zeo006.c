#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int num = 211;
    int isPrime = true;

    for (int i = sqrt(num); i >= 2 ; i--)
    {
        printf("%d ", i);
        if (num % i == 0)  
        {
            isPrime = false;
        }
        
    }

    if (isPrime)
    {
        printf("\n%d is a Prime Number \n",num);
    }
    else
    {
        printf("\n%d is a Composite Number \n",num);
    }
  
   
    
}