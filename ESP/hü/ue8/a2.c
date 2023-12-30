#include <stdio.h>

/**
 * Determines the number of days in an entered month
 *
 * @param month Integer representing a Month with values 1-12
 * @return The number of days in the month
 */
unsigned int days_per_month(unsigned int month) {

	// Returns the number of days for a month
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2: 
			return 28;
		default:
			return 0;
	}
}

/**
* Prints the number of days for a few example months
* 
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char** argv)
{
	printf("February (2) has %d days\n", days_per_month(2));
	printf("March (3) has %d days\n", days_per_month(3));
	printf("April (4) has %d days\n", days_per_month(4));
	printf("December (12) has %d days\n", days_per_month(12));

	return 0;
}
// warning because we never use argc and argv[] 