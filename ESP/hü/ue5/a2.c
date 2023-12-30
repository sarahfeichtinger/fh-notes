#include <stdio.h>

/**
 * paints a triangle of # characters in the console
 *
 * @param rows Rows of the triangle
 * @param stepsize Defines how much more # are printed from one row to the next
 */
void triangle(unsigned int rows, unsigned int stepsize) {

    int longest_row = rows / 2 * stepsize + 1;

    // print all rows
    for (unsigned int i = 0; i < rows; i++) {

        unsigned int symbols_in_row;

        // check if triangle gets bigger or smaller
        if (i > rows / 2) {
            symbols_in_row = (rows - i - 1) * stepsize + 1;
        }
        else {
            symbols_in_row = i * stepsize + 1;
        }

        // print the spaces and # per row
        for (unsigned int j = 0; j < longest_row; j++) {

            // calculate spaces in row and print first the spaces and then the #s
            if (j < longest_row - symbols_in_row) {
                printf(" ");
            }
            else {
                printf("#");
            }
        }
        
        printf("\n");
    }

}

/**
 * Reads the arguments for printing a triangle and checks for successful reading
 * 
 * @param argc The number of command-line arguments.
 * @param argv An array of strings representing the command-line arguments.
 * @return 0 If the code runs without errors
 * @return 1 If there are wrong input values when reading from the console
 */
 // warning because we never use argc and argv[] but we dont need it 
int main(int argc, char* argv[]) {

    int rows, stepsize;
    
    printf("How many rows? rows = ");

    // successfully read rows (return of scanf_s != 0), is rows an integer, odd and positive
    if (scanf_s("%d", &rows) && rows % 2 != 0 && rows >= 0)
    {
        printf("Stepsize? stepsize = ");

        /* successfully read stepsize(return of scanf_s != 0)
        is stepsize an integer, positive and at least one print the triangle and exit program */
        if (scanf_s("%d", &stepsize) && stepsize > 0) {
            triangle(rows, stepsize);
            return 0;
        }
    }

    return 1;
}




