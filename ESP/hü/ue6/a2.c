#include <stdio.h>
#define ROWS 5
#define COLS 7

/**
* Fills an array with values which are calculated based on column and row number
*
* @param arr Pointer to the two dimentional array "array"
* @return Size of the two dimentional array
*/
int fill_values(int* arr) {

	// loop over rows
	for (int i = 0; i < ROWS; i++) {
		//loop over cols and fill array
		for (int j = 0; j < COLS; j++) {
			arr[i * COLS + j] = j + i;
		}
	}

	return ROWS * COLS;
}

/**
* Initializes an array, fills it with calculated values and prints it
*
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char* argv[]) {
	int array[ROWS][COLS] = { 0 };
	int i, j;
	/* This call makes two warnings?! why do they happen?? */
	/* the types of the function call and the function head dont exactly match, we would eg. either need to pass int fill_values(int arr [ROWS][COLS])
	* or cast array in the function call explicitly to (int*) 
	*/
	fill_values(array);
	// loop over rows
	for (i = 0; i < ROWS; i++) {
		// loop over cols and print array
		for (j = 0; j < COLS; j++)
			printf("%3d", array[i][j]);
		printf("\n");
	}
	return 0;
}
// warning because we never use argc and argv[] 