#include <stdio.h>

void set_column(char* buffer, int col, int n);

int main(void) {
    int n;

	do {
		printf("Enter n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	char buffer[((2 * n) - 1) * (2 * n)];

	for (int col = 0; col < n; col++) {
		set_column(buffer, col, n);
	}

	// ใส่ \n ปิดท้ายบรรทัด, และใส่ \0 ที่ตำแหน่งสุดท้ายของ 
	// buffer เพื่อ terminate สตริง
	for (int row = 0; row < (2 * n) - 1; row++) {
		buffer[(2 * n * row) + ((2 * n) - 1)] 
			= (row == (2 * n) - 2) 
				? '\0' 
				: '\n';
	}

	printf("%s\n", buffer);

    return 0;
}

void set_column(char* buffer, int col, int n) {
	for (int row = 0; row < (2 * n) - 1; row++) {
		buffer[(2 * n * row) + (2 * col)] 
			= (row < col || row > ((2 * n) - 1 - (col + 1))) 
				? ' ' 
				: '*';
		buffer[(2 * n * row) + (2 * col) + 1] = ' ';
	}
}