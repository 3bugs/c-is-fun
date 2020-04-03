#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n);

int main() {
    int n, palindrome_count = 0;

	printf("Enter n to find all palindromic whole numbers between 1 and n: ");
	scanf("%d", &n);
	printf("\n");

    for (int i = 1; i <= n; i++) {
		if (is_palindrome(i)) {
			printf("%d, ", i);
			palindrome_count++;
		}
	}
	printf("\n\n-----\nTotal %d palindromes\n\n", palindrome_count);
	
	return 0;
}

bool is_palindrome(int n) {
    const int original = n;
	int reverse = 0;

	while (n > 0) {
		int remainder = n % 10;
		reverse = (reverse * 10) + remainder;
		n = n / 10;
	}

	return original == reverse;
}