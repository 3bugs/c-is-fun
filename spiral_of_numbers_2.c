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
    int direction = 0;  // 0 = go right
                        // 1 = go down
                        // 2 = go left
                        // 3 = go up

    // Initialize board
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            board[row][col] = 0;
        }
    }

    for (int i = 0; i < n * n; i++) {
        board[row][col] = i + 1;

        if (direction == 0) {
            if (board[row][col + 1] == 0 && col < n - 1) {
                col++;
            } else {
                row++;
                direction = 1;
            }
        } else if (direction == 1) {
            if (board[row + 1][col] == 0 && row < n - 1) {
                row++;
            } else {
                col--;
                direction = 2;
            }
        } else if (direction == 2) {
            if (board[row][col - 1] == 0 && col > 0) {
                col--;
            } else {
                row--;
                direction = 3;
            }
        } else if (direction == 3) {
            if (board[row - 1][col] == 0 && row > 0) {
                row--;
            } else {
                col++;
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