#include <stdio.h>
#include "a2.h"

/**
 * Prints the circumference and aria of a circle with a defined radius
 *
 * @param void No params
 * @return 0 Program executed successfully
 */
int main(void) {

	printf("Der Umfang eines Kreises mit dem Radius %.2f beträgt %.2f\n", R, UMFANG(R));
	printf("Die Fläche eines Kreises mit dem Radius %.2f beträgt %.2f\n", R, FLAECHE(R));

	return 0;
}