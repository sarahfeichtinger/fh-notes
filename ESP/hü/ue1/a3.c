#include <stdio.h>
#include <limits.h>
#include <float.h>


// calls the method of the task
// params: void (no params)
// return: return value of task method (always 0 = success)

int main(void) {
	return a3();
}



/*
Prints the upper and lower limits of all elementary data types
*/
// return: 0 (executed successfully)
int a3() {

	printf("BEREICHSGRENZEN\n");
	printf("============================================\n");
	printf("%27s%17s\n", "Untergrenze", "Obergrenze");
	printf("============================================\n");

	printf("%-15s%12d  bis%12d\n", "char:", CHAR_MIN, CHAR_MAX);
	printf("%-15s%12d  bis%12d\n", "unsigned char:", 0, UCHAR_MAX);
	printf("%-15s%12d  bis%12d\n", "short:", SHRT_MIN, SHRT_MAX);
	printf("%-15s%12d  bis%12d\n", "unsigned short:", 0, USHRT_MAX);
	printf("%-15s%12d  bis%12d\n", "int:", INT_MIN, INT_MAX);
	printf("%-15s%12d  bis%12u\n", "unsigned int:", 0, UINT_MAX);
	printf("%-15s%12d  bis%12d\n", "long:", LONG_MIN, LONG_MAX);
	printf("%-15s%12d  bis%12u\n", "unsigned long:", 0, ULLONG_MAX);
	printf("%-15s%12.3e  bis%12.3e\n", "float:", FLT_MIN, FLT_MAX);
	printf("%-15s%12.3e  bis%12.3e\n", "double:", DBL_MIN, DBL_MAX);

	/*
	DBL_MIN and DBL_MAX depend on the compiler and the processor. 
	On the ARM 64-bit architecture, long double is defined as the IEEE quad precision standard (128-bit), 
	but that does not mean that the C compiler actually supports it. 
	Some compilers make long double the same as double, but others use some other format (such as the Intel 80-bit format). 
	*/
	printf("%-15s%12.3e  bis%12.3e\n", "long double:", LDBL_MIN, LDBL_MAX);

	return 0;
}
