#include <stdio.h>

int main(void) {
    int x, y, temp;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("\n");

    printf("Before swapping\n");
    printf("x: %d, y: %d\n\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping\n");
    printf("x: %d, y: %d\n\n", x, y);

    return 0;
}