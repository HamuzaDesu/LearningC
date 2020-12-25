#include <stdio.h>

int main(){

    int side1, side2;

    printf("Give 2 numbers: ");
    scanf("%d %d", &side1, &side2);

    int area = side1 * side2;

    printf("The area of a shape with sides %d and %d is %d", side1, side2, area);

    return 0;
}