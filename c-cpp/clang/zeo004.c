#include <stdio.h>

int main()

{  int pass;
   _Bool isDone = 0;
   printf("Enter either 0 or 1");
   scanf(" %d", &pass);
   printf("%d", pass);
       isDone = pass;

      while (isDone)
   {
       printf("you're inside while loop\n");
       scanf("%d", &pass);
       isDone = pass;
   }




   

}