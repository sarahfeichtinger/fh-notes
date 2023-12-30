#include <stdio.h>

/**
 * Checks if given numbers are a palindrome, meaning they are the same no matter which side they are read from
 *
 * @return 0 if the code runs without errors
 */
int main(void)
{
	unsigned int number[] = { 1, 0, 1 };
	int length = sizeof(number) / sizeof(unsigned int);
	int is_palindrom = 1;
	char numberString[] = "";


	for (int i = 0; i < length / 2; i++) {
		if (number[i] != number[length - 1 - i]) {
			is_palindrom = 0;
			break;
		}
	}

	printf("The number ");
	for (int i = 0; i < length; i++) {
		printf("%u", number[i]);
	}
	printf(" is %s parliatrome\n", (is_palindrom == 1) ? "a" : "no");

	return 0;
}