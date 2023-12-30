#include <stdio.h>
#include "a1.h"

/**
 * Prints the results of the addition, subtraction, multiplication and division of 2 defined float values
 *
 * @param void No params
 * @return 0 Program executed successfully
 */
int main() {
    printf("WERT1: %.2f\n", WERT1);
    printf("WERT2: %.2f\n", WERT2);

    printf("%.2f + %.2f = %.2f\n", WERT1, WERT2, ADD(WERT1, WERT2));
    printf("%.2f - %.2f = %.2f\n", WERT1, WERT2, SUB(WERT1, WERT2));
    printf("%.2f * %.2f = %.2f\n", WERT1, WERT2, MUL(WERT1, WERT2));
    printf("%.2f / %.2f = %.2f\n", WERT1, WERT2, DIV(WERT1, WERT2));

    return 0;
}