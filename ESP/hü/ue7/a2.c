#include <stdio.h>
#include <stdarg.h>


/**
 * Adds up a variable number of integers ('i'), characters ('c'), and doubles ('d') based on the provided format string.
 *
 * @param fms A format string specifying the types and order of the expected arguments.
 * @param ... Variable number of arguments corresponding to the format string.
 * @return The sum of the provided arguments. If an error occurs, returns -1.0.
 */
double var_add(const char* fms, ...) {
    va_list args;
    va_start(args, fms);

    double result = 0.0;

    // Loop through the format string until the end is reached
    while (*fms) {

        // Read the next argument based on the type and add it to the result
        if(*fms == 'i' || *fms == 'c') {
            result += va_arg(args, int);
        }
        else if (*fms == 'd') {
            result += va_arg(args, double);
        }
        // Look for unknown character in the format string
        // Ignore spaces and pluses
        else if(*fms != ' ' && *fms != '+') {
            printf("Error: Unknown format character '%c'\n", *fms);
            va_end(args);
            return -1.0;
        }
        fms++;

    }

    va_end(args);
    return result;
}

/**
* Defines a format string representing the expected types of arguments and calls a function to calculate the sum
* of some numbers with the provided format string
* Prints the result, if the calculation is successful
* 
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char** argv)
{
	char fms[] = "i + c + d + d";
	double ret = var_add(fms, 3, 'a', 1.999, 42.5);

    // print result if there was no error
	if (ret >= 0) {
		printf(fms);
		printf(" = %f\n", ret);
	}
	return 0;
}
// warning because we never use argc and argv[] 