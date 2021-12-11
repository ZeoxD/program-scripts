#include <stdio.h>
main() {
   const int x = 10; //define constant int
   int *ptr;
   printf("x = %d\n", x);
   ptr = &x; //ptr points the variable x
   *ptr = 15; //Updating through pointer
   printf("x = %d\n", x);
}