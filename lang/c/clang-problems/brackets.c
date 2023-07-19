#include <stdio.h>
#include <stdlib.h>

int main() {
  int prev = 5;
  int a = {prev};
  int b = (4, 5, 7, prev);
  printf("%d %d", a, b);
  return 0;
}
