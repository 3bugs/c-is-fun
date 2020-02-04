#include <stdio.h>

void printTriangleOfNumbers(int n);

int main(void) {
    int n;

	do {
		printf("input n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	printTriangleOfNumbers(n);
    return 0;
}

void printTriangleOfNumbers(int n) {
    if (n <= 0) return;

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n");
	printTriangleOfNumbers(n - 1);
}