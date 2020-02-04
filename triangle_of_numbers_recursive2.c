#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* triangle_of_numbers(int n);

int main(void) {
    int n;

	do {
		printf("input n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	printf("%s", triangle_of_numbers(n));
    return 0;
}

char* triangle_of_numbers(int n) {
    if (n <= 0) return "";

	char* buffer = (char *) malloc(n * 5);

	for (int i = 1; i <= n; i++) {
		char temp[3];
		sprintf(temp, "%d ", i);
		strcat(buffer, temp);
	}
	strcat(buffer, "\n");

	char* previousBuffer = triangle_of_numbers(n - 1);
	strcat(buffer, previousBuffer);
	if (n > 1) free(previousBuffer);

	return buffer;
}