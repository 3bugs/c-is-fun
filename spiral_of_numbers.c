#include <stdio.h>

int main(void) {
    int n;

	do {
		printf("Enter n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 20);

	int board[n][n];
    int row = 0, col = 0;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int direction = 0;  // 0 = go right
                        // 1 = go down
                        // 2 = go left
                        // 3 = go up

    for (int i = 0; i < n * n; i++) {
        board[row][col] = i + 1;

        if (direction == 0) {
            if (col < right) {
                col++;
            } else {
                row++;
                top++;
                direction = 1;
            }
        } else if (direction == 1) {
            if (row < bottom) {
                row++;
            } else {
                col--;
                right--;
                direction = 2;
            }
        } else if (direction == 2) {
            if (col > left) {
                col--;
            } else {
                row--;
                bottom--;
                direction = 3;
            }
        } else if (direction == 3) {
            if (row > top) {
                row--;
            } else {
                col++;
                left++;
                direction = 0;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("%4d", board[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}