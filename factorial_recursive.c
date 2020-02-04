#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n);

int main(int argc, char **argv) {
    int n = atoi(argv[1]);
    
    printf("%d! = %llu\n", n, factorial(n));

    return 0;
}

unsigned long long factorial(int n) {
    if (n == 1) return 1;

    return n * factorial(n - 1);
}
