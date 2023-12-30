#include <stdio.h>


// calls the method of the task
// params: void (no params)
// return: return value of task method (always 0 = success)

int main(void) {
	return a4();
}


/*
* commented example for bad programming
*/
// return: 0 (executed successfully)
int a4() {

	int x = 98;
	int k = 0;
	short i1 = -273;
	unsigned short i2 = -1;
	short i3 = 65535;
	float p1 = 3.141592653589793;
	double p2 = 3.141592653589793;
	double dl = 534.7456e+10;

	// "x hat den Wert b", %c prints the value of x as a char symbol, decimal value 98 is apparently a "b" in the ascii table
	k = printf("x hat den Wert %c\t\r\b\n", x);

	// "14"
	// printf returns the number of characters that are printed as int
	// => k = 20 (text = 16 + tab = 1 + Carriage Return (\r) = 1 + Backspace(\b) = 1 + New Line(\n) = 1 
	// %X prints as HEX Number with Uppercase letters, 20 decimal is 14 as hex number
	printf("%X\n", k);


	// "i1 = -273, i1 = 65263"
	// i1 initialised as short can be interpreted as integer in the printf because its in the defined range of integer
	// since i1 isnt in the range of unsigned short (its negative) it gets converted to a value in the range of unsigned short
	printf("i1 = %d, i1 = %hu\n", i1, i1);

	// "i2 = 65535, i2 = -1" 
	// since i2 is an unsigned short, -1 already gets converted when the variable is initialised, the unsigned short is in in the range of int so this works
	// i3 is a short, the maximal value for short is 32767, 65535 in two's complement is -1, therefore it gets converted to -1 (its the other way around above)
	printf("i2 = %d, i2 = %d\n", i2, i3);

	// "3.141593 und 3.1415927410"
	// .10f means 10 decimal places
	// if its not specified, %f automatically prints 6 decimal places
	printf("%f und %.10f\n", p1, p1);


	// "+3.141593 und +3.1415926536 und +3.14159265358979311600"
	// + makes the number always shown with a sign (+/-) even when its positive
	// .10f means 10 decimal places, .20 means 20 decimal places
	printf("%+f und %+.10f und %+.20f\n", p2, p2, p2);

	// "5.35E+12 und 5.3475e+12"
	// "10.2E" means there are 10 places bevore the comma and 2 after it and the E makes it shown in 
	// Scientific notation (mantissa/exponent) using E character
	// "-30.4e" means there are 30 places bevore the comma and 4 after it and the e makes it shown in 
	// Scientific notation (mantissa/exponent) using e character
	// "-" means Left - justify within the given field width; Right justification is the default
	printf("%10.2E und %-30.4e\n", dl, dl);
	return 0;
}
