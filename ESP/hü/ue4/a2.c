#include <stdio.h>
#include "a2.h"


/*
* Calculates -1^k
* note: 0 is interpreted as false and everything else true
* 
* @param int k The exponent  
* @return -1 if k is odd, 1 if k is even.
*/
int minusOnePowerK(int k) {
	return (k % 2) ? -1 : 1;
}

/*
* Computes the fraction value based on the given formula of the leibniz series
*
* @param int k Running variable
* @return The result of the fraction
*/
double fraction(int k) {
	return (double)minusOnePowerK(k) / (2 * k + 1);
}

/**
 * Calculates the sum of fractions up to a given number of terms.
 *
 * @param int noOfFractions Number of fractions to consider in the summation.
 * @return double sum
 */
double sumOfFractions(int noOfFractions) {
	double sum = 0;

	// Iterate through each fraction up to the specified number of fractions => form a sum
	for (int i = 0; i < noOfFractions; i++) {
		sum = sum + fraction(i);
	}
	return sum * 4;
}

/**
Sums the range from 1 to the first 100000 fractions for an approximation 
of pi and outputs intermediate results in a tabular format using Leibniz series.

@return 0 if the code runs without errors
*/
int main(void)
{
	printf("#fractions  approximation\n");
	printf("=============================\n");
	
	// Iterate through the range 1 to 9 using the current number of iterations for the current number of fractions 
	// (used for the approximation of pi) and print the approximation
	for (int i = STEP_SIZE_1_LOWER_BOUNDARY; i <= STEP_SIZE_1_UPPER_BOUNDARY; i++) {
		printf("%-11d %.15f\n", i, sumOfFractions(i));
	}

	// Iterate through the range 10 to 99 with step size 10 using the current number of iterations for the current number of fractions 
	// (used for the approximation of pi) and print the approximation
	for (int i = STEP_SIZE_10_LOWER_BOUNDARY; i <= STEP_SIZE_10_UPPER_BOUNDARY; i += 10) {
		printf("%-11d %.15f\n", i, sumOfFractions(i));
	}

	// Iterate through the range 100 to 10000 with step size factor 10 using the current number of iterations for the current number of fractions 
	// (used for the approximation of pi) and print the approximation
	for (int i = FACTOR_10_LOWER_BOUNDARY; i <= FACTOR_10_UPPER_BOUNDARY; i *= 10) {
		printf("%-11d %.15f\n", i, sumOfFractions(i));
	}

	return 0;
}