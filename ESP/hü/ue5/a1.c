#include <stdio.h>

unsigned long long fact;

/**
 * determines the factorial of a number using recursive call
 *
 * @param n The integer whose factorial is being calculated
 * @return The factorial of n
 */
unsigned long long fact_r(int n) {

    // fact(0)=1
    if (n == 0) {
        printf("fact_r(%d) = %d\n", 0, 1);
        return 1;
    }

    fact = n * fact_r(n - 1);

    printf("fact_r(%d) = %llu\n", n, fact);

    return fact;
}

/**
 * determines the factorial of a number using a loop
 *
 * @param n The integer whose factorial is being calculated
 */
void fact_s(int n) {

    fact = 1;
    printf("fact_s(%d) = %llu\n", 0, fact);

    // prints factorials from 1 - n
    for (int i = 1; i <= n; i++) {
        fact *= i;
        printf("fact_s(%d) = %llu\n", i, fact);
    }
}

/**
 * calculates the factorial for both variants with recursion and loop up to the number 20 and prints them
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings representing the command-line arguments.
 * @return 0 if the code runs without errors.
 */
 // warning because we never use argc and argv[] but we dont need it 
int main(int argc, char* argv[]) {
    fact_r(20);
    fact_s(20);
    return 0;
}