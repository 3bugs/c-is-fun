#include <stdio.h>

int main(void) {
    int n;

	do {
		printf("Enter n (1 - 20): ");
		scanf("%d", &n);
		printf("\n");
	} while (n < 1 || n > 100);

	int board[n][n];
    int value = 0;
    int start = 0, end = n - 1;

    while (start < end) {
        for (int col = start; col < end; col++) {
            board[start][col] = ++value;
        }
        for (int row = start; row < end; row++) {
            board[row][end] = ++value;
        }
        for (int col = end; col > start; col--) {
            board[end][col] = ++value;
        }
        for (int row = end; row > start; row--) {
            board[row][start] = ++value;
        }
        start++;
        end--;
    }

    //กรณี n เป็นเลขคี่ สุดท้าย start กับ end จะเท่ากัน 
    //และจะเหลือช่องตรงกลางที่ไม่ถูกกำหนดค่า
    if (start == end) { 
        board[start][start] = ++value;
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("%5d", board[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}