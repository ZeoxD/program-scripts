#include<stdio.h>
int arr[] = {5, 2, 3};
int main(void) {
    int arr[] = {11, 2, 6, 9, 1};
    int a, b, c;
    a = --arr[2];
    b = --arr[2];
    c = arr[b];
    printf("%d %d %d ", a, b, c);
    return 0;
}