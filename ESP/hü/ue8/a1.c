#include <stdio.h>

/**
 * Takes two integer pointers, and swaps the values
 * they point to
 * 
 * @param x Pointer to the first number to be swaped
 * @param y Pointer to the second number to be swaped
*/
void swap(int* x, int* y) {
	int swap_help = *x;
	*x = *y;
	*y = swap_help;
}

/**
 * Sorts an array using bubble sort
 * The algorithm compares two adjacent values ​​in the field and in a loop
 * swap these if they are not yet in order.
 *
 * @param array Pointer to the first number of the array 
 * @param len Lenght of the array
 * @return The Number of executed swaps
*/
int bubblesort(int* array, unsigned int len) {

	int swaps = 0;
	
	// loop the array
	for (unsigned int i = 0; i < len - 1; i++) {

		/*
		* Loops through all yet unsorted numbers.
		* The largest value is always determined per loop run and shifted to the right,
		* therefore no longer needing to be compared in the following loop run.
		*/
		for (unsigned int j = 0; j < len - i - 1; j++) {

			// Swap if the current element is greater than the next element.
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
				swaps++;
			}
		}
	}

	return swaps;
}

/**
* Prints an unsorted array, uses bubble sort to sort it and prints it sorted again
*
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char* argv[]) {
	int arr[] = { 30, 97, 55, 62, 9, 99, 19, 10, 24, 64, 56, 7, 95, 45, 42, 52, 17, 94, 63, 79, 38, 83, 31, 18, 28, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("Array before bubble sort: \n");

	// print all elements of the array
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	int num_of_swaps = bubblesort(arr, len);
	printf("Array after bubble sort: \n");
	
	// print all elements of the array
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Swapped %d times\n", num_of_swaps);

	return 0;
}
// warning because we never use argc and argv[] 