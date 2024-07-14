#include <stdio.h>
#include <stdint.h>

int main() {

	int num1;
	int num2;
	int ar_fib[8];

	puts("Please type the FIRST number of fibonacci: ");
	scanf_s("%d", &num1);
	puts("Please type the SECOND number of fibonacci: ");
	scanf_s("%d", &num2);

	ar_fib[0] = num1;
	ar_fib[1] = num2;

	for (int i = 2; i < 8; i++) {
		ar_fib[i] = ar_fib[i - 1] + ar_fib[i - 2];
	}

	//printing
	for (int h = 0; h < 8; h++) {
		printf("%d ", ar_fib[h]);
	}


	return 0;
}