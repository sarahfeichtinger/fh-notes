#include <stdio.h>
#include <math.h>


// calls the method of the task
// params: void (no params)
// return: return value of task method (always 0 = success)

int main(void) {
	return a1();
}


/*
Prints the byte sizes of the binary prefixes Kibi, Mebi, Gibi, Tebi and Pebi
according to the IEC standard
*/
// return: 0 (executed successfully)
int a1(){
	printf("MEMORY PREFIX SIZES\n");
	printf("=============================\n");

	// 2 to the power of 10
	short kikibyte = (1 << 10);
	printf("1 Kikibyte = %16d\n", kikibyte);

	// 2 to the power of 20
	int mebibyte = (1 << 20);
	printf("1 Mebibyte = %16d\n", mebibyte);

	// 2 to the power of 30
	int gibibyte = (1 << 30);
	printf("1 Gibibyte = %16d\n", gibibyte);

	// 2 to the power of 40
	long long tebibyte = (long long)(pow(2, 40));
	printf("1 Tebibyte = %16lld\n", tebibyte);

	// 2 to the power of 40
	long long pebibyte = (long long)(pow(2, 50));
	printf("1 Pebibyte = %16lld\n", pebibyte);

	return 0;
}