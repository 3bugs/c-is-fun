#include <stdio.h>

void print_line_of_n_stars(int n);

int main(void) {
    int n;

	do {
		printf("Enter n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	for (int i = 1; i <= (2 * n) - 1; i++) {
		if (i <= n) {
			print_line_of_n_stars(i);
		} else {
			print_line_of_n_stars(i - (2 * (i - n)));
		}
	}

    return 0;
}

void print_line_of_n_stars(int n) {
	for (int i = 0; i < n; i++) {
		printf("* ");
	}
	printf("\n");
}