#include <stdio.h>

// Function declarations
long add(int a, int b, int c) { return a + b + c; }
long sub(int a, int b, int c) { return a - b - c; }

/**
 * Evaluates the appropriate operation function based on the input character.
 *
 * @param op The input character ('+' or '-').
 * @result A function pointer to the corresponding operation function (add or sub).
 */
int (*getOperation(char op))(int, int, int) {
	// Check the input character and return the corresponding function pointer
	if (op == '+') return &add;
	else return &sub;
}

/**
* Uses the command-line arguments to perform addition or subtraction and print either the result 
* or an error message if the input doesnt fit 
*
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char* argv[]) {
	long res = 0;
	int (*func)(int, int, int) = NULL;
	// Check if a command-line argument is provided and it is either '+' or '-', evaluate operator and perform operation
	if (argv[1] != NULL && (*argv[1] == '+' || *argv[1] == '-')) {
		func = getOperation(*argv[1]);
		res = func(4, 2, 1);
		printf("result: %d\n", res);
	}
	else printf("parameter should be '+' or '-'\n");
	return 0;
}
