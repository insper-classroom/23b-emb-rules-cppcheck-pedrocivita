#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}

int main(void) {
    int a;
    int b;
    a = 5;
    b = 5; //uninitvar, legacyUninitvar
    int result;
    result = multiplyNumbers(a, b);

    int arr[NUM_ELEMENTS];
    for(int i = 0; i <= NUM_ELEMENTS-1; i++) { //arrayIndexOutOfBounds
        arr[i] = i;
    }

    return 0;
}
