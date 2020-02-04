#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n);

int main(int argc, char **argv) {
    int n = atoi(argv[1]);
    
    printf("%d! = %llu\n", n, factorial(n));

    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = n; i > 0; i--) {
        result *= i;
    }

    return result;
}
