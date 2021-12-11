#include <stdio.h>
int main()
{
int a[10], b[10], check = 0, n1, n2, i, j;

printf("Enter first Array size ");
scanf("%d",&n1);
printf("\nEnter second Array size ");
scanf("%d",&n2);

printf("\nEnter first Array elements ");
for(i = 0;i < n1;i++)
    scanf("%d",&a[i]);

printf("\nEnter second Array element ");
for(i = 0;i < n2;i++)
    scanf("%d",&b[i]);

printf("Intersection: ");
for(i = 0;i < n1;i++)
    {
        for(j = 0;j < n2;j++)
        {
            if(b[i] == a[j])
            {
                check = 1;
            }
        }
        
        if(check == 1)
        {
            printf("%d ", b[i]);
        }

    check = 0;
    }

return 0;
}