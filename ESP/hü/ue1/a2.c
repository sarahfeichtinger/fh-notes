#include <stdio.h>

// calls the method of the task
// params: void (no params)
// return: return value of task method (always 0 = success)

int main(void) {
	return a2();
}



/*
Prints the storage sizes of all elementary data types
*/
// return: 0 (executed successfully)
int a2() {
	printf("SPEICHERGROESSEN\n");
	printf("===============================\n");

	printf("Speichergroesse Character: %d\n", sizeof(char));
	printf("Speichergroesse Short: %d\n", sizeof(short));
	printf("Speichergroesse Integer: %d\n", sizeof(int));
	printf("Speichergroesse Long: %d\n", sizeof(long));
	printf("Speichergroesse Long Long: %d\n", sizeof(long long));
	printf("Speichergroesse Float: %d\n", sizeof(float));
	printf("Speichergroesse Double: %d\n", sizeof(double));
	printf("Speichergroesse Long Double: %d\n", sizeof(long double));
}
