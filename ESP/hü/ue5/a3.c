#include <stdio.h>

/**
 * Counts all letters (A-Z, a-z) in the passed string.
 *
 * @param strng The input string to count letters from.
 * @return The number of letters in the input string.
 */
int count_letters(char strng[]) {

	int letter_count = 0;

	// iterate array to find all letters
	for (int i = 0; strng[i] != '\0'; i++) {
		// check if char is a letter (ASCII A-Z and a-z)
		if ((strng[i] >= 'A' && strng[i] <= 'Z') || (strng[i] >= 'a' && strng[i] <= 'z')) {
			letter_count++;
		}
	}

	return letter_count;
}

/**
 * Counts all letters (ASCII A-Z and a-z) in the passed string and prints result
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings representing the command-line arguments.
 * @return 0 if the code runs without errors.
 */
// warning because we never use argc and argv[] but we dont need it 
int main(int argc, char* argv[]) {
	char name[42] = "Asterix, Obelix, Idefix";
	printf("Letters in '%s': %d\n", name, count_letters(name));
	return 0;
}