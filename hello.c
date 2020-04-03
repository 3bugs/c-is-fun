#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int n;

    do {
        printf("Enter n: ");
        scanf("%d", &n);
        printf("%d! = %'llu\n\n", n, factorial(n));
    } while (n > 0);

    return 0;
}

unsigned long long factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
