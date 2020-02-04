#include <stdio.h>

int main(void) {
    int i = 0, n = 0;

	do {
		printf("input n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	for (; n > 0; --n) {
		for (i = 0; i < n; ++i) {
			printf("%d ", i + 1);
		}
		printf("\n");
	}

    return 0;
}