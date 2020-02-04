#include <stdio.h>

void print_line_of_n_stars(int n);

int main(void) {
    int n, i = 1, direction = 1;

	do {
		printf("Enter n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	while (i > 0) {
		print_line_of_n_stars(i);

		if (i == n) direction = -1;
		
		i += direction;
	}

    return 0;
}

void print_line_of_n_stars(int n) {
	for (int i = 0; i < n; i++) {
		printf("* ");
	}
	printf("\n");
}