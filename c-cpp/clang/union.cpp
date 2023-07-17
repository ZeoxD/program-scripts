#include<stdio.h>

typedef union u {
  char m;
  int n;
} uobj;

int main() {
  uobj um;
  um.n = 65;
  printf("%c", um.m);
  return 0;
}
