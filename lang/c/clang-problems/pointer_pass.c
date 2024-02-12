// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void printer(int *qtr, int size);

int main() {
    const int SIZE = 5;
    int *ptr = (int*) malloc(SIZE * sizeof(int));
    for(int i = 0 ; i < SIZE; i++) {
        ptr[i] = i*1000;
    }
    printer(ptr, SIZE);
    return 0;
}

void printer(int *qtr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d \n", qtr[i]);
    }
}
