#include <stdio.h>

int main(){

    int myNumber = 23;

    printf("Your number is: %d\n", myNumber);

    int *pointer = &myNumber;

    printf("The memory address of the number is: 0x%x", pointer);

    return 0;
}