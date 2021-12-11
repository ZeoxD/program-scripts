//Divyanshu Tripathi
//1900321290030
#include <stdio.h>
int main()
{
    int a[50], b[50], c[50], i, j, n1, n2, k = 0, f = 0;
    printf("Enter the size of Array1 A\n");
    scanf("%d", &n1);
    printf("Enter the elements of Array1 A\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of Array2 B\n");
    scanf("%d", &n2);
    printf("Enter the elements of Array2 B\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
    {
        f = 0;
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("A-B is : ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}