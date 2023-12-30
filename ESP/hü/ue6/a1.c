#include <stdio.h>

/**
* Modifies its parameters
*
* @param a Char pointer
* @param b Char pointer pointer
* @return 0 Function runs without errors
*/
int func(char* a, char** b) {

	// char pointer is incremented by 3 => b -> str -> "g" (= a+3)
	// this means we go forward 3 chars in the string
	// dereferenced b = the value of pointer str (which is the address of "p") and therefore we change the value of str and dereferenced str is now = "g"
	*b = a + 3;

	// pointer pointer b is set to the address of pointer a => b -> a -> "p"
	// note, a is still pointing to "p" because when we passed it as a variable, the address of p got safed a second time in the memory 
	b = &a;

	// char pointer is incremented by 1 => b -> a -> "r" (= a+1) 
	// this means we go forward 1 char in the string
	// now, since b is pointing to a and not to str anymore, with *b = a + 1 we replace the value of a and a now is pointing to "r"
	*b = a + 1;

	// exit code 0
	return 0;
}
/**
* Initializes a string, modifies it and prints the modified string 
*
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char* argv[]) {

	// initialize a pointer 'str' to the constant string "program".
	char* str = "program";

	// calls the function func and passes the pointer str and the address of the pointer str
	func(str, &str);


	// prints the modified string, string gets modified in *b = a + 3;
	printf("%s\n", str);

	// exit code 0
	return 0;
}
// warning because we never use argc and argv[] 