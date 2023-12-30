#include <stdio.h>

/**
 * @param void No params
 * @return 0 Program executed successfully
 */
int main(void)
{
	int sum = 17;
	int count = 5;
	char c = 'c';
	int i;
	int j;
	double avg;

	/* Implicit typecast */
	/**
	 * Prints: 3.00
	 * Expected: 3.40
	 *
	 * In C, the result of dividing two integers is itself an integer, and the fractional part is simply truncated
	 * Since the typecast is performed automatically by the compiler without the programmers intervention its called inplicit typecast
	 */
	avg = sum / count;
	printf("Implicit typecast:\t avg=%.2f\n", avg);

	/* Side effects */
	/**
	 * Prints: count=6 i=6 j=5
	 * Maybe expected: count=5 i=6 j=6
	 *
	 * Using ++ after the variable makes it a "post-increment operator" 
	 * In the Post-Increment, value is first used in an expression and then incremented
	 * 
	 * To increment the value before assigning it, ++ could be used as a pre-increment operator, looking like this: j = ++count;
	 */
	i = count + 1;
	j = count++;
	printf("Side effects:\t\t count=%i i=%i j=%i\n", count, i, j);

	/* Integer promotion */
	/**
	 * Prints: i=116 
	 * 
	 * Integer promotion is a concept in C in which smaller integer types (such as char and short) are converted to int or unsigned int 
	 * before eg. performing arithmetic operations to ensure that the operations produce correct results.
	 * 
	 * Its used here because the operation of addition cant be performed on char and int, therefore the char is converted to int 
	 * ('c' = 99 as (decimal) int value according to the ascii table) and after that the addition gets performed on the 2 int values 
	 */
	i = sum + c;
	printf("Integer promotion:\t i=%i\n", i);

	/* Incompatible assignment */
	/**
	 * Prints: i=486 c=-26  
	 * 
	 * chars are 8-Bit numbers (no floating point), means chars can only be in the range of -128 to 127. 486 is not in that range.
	 * If we save 486 in a char variable what happens is, that C takes the first byte in storage of the integer (this can either be the 
	 * most significant 8 bits of the integer if its a big endian system, or the least significant 8 bits of the integer if its a little endian system),
	 * in my case that is the least significant 8 bits, and stores them in the char
	 * 
	 * 486 = 00000001 11100110 (2's complement)
	 * "take the 8 least significant bits"
	 * = 11100110 (2's complement)
	 * = -26 (decimal)
	 * 
	 * %i: Signed decimal integer
	 * with %i the decimal value of c gets printed (=-26)
	 * 
	 * grundsätzlich gibt es keinen Signed Char (in visual studio evtl schon aber grundsätzlich), wenn man einen Char der mit 1 startet als Int ausgibt dann wird es aber signed interpretiert
	 * 
	 */
	i = 486;
	c = i;
	printf("Incompatible assignment:\t i=%i c=%i\n", i, c);

	/* Explicit typecast */
	/**
	 * Prints: i=-295 j=-39 
	 * 
	 * Since the typecast is performed with the programmers intervention, using the typecast operator, its called explicit typecast
	 *
	 * Works the same as the example before with one exception, apparently when the typecast operator is used, C always uses the 8 least significant bits
	 * no matter if its a big or little endian system
	 * 
	 * %i: Signed decimal integer
	 * with %i the decimal value of j gets printed (=-39)
	 */
	i = -295;
	j = (char)i;
	printf("Explicit typecast:\t i=%i j=%i\n", i, j);
	return 0;
}