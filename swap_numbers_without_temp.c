#include <stdio.h>

int main(void) {
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("\n");

    printf("Before swapping\n");
    printf("x: %d, y: %d\n\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping\n");
    printf("x: %d, y: %d\n\n", x, y);

    return 0;
}