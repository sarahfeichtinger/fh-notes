#include <stdio.h>

/**
 * Prints the results of different bit operations (assignment a)
 *
 * @param days_over How long is the product over the expire date in days
 * @param smell_score How strong does the product smell in a not supposed to scent, starting with 0=doesnt smell
 * @return 0 Product not eatable anymore
 * @return 1 Product still eatable
 */
int is_eatable(int days_over, int smell_score) {

	if (days_over >= 3 && smell_score > 0)
	{
		return 0;
	}

	return 1;
}