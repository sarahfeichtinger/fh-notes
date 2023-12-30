#include <stdio.h>
#define A 15
#define B A-1
#define ADD A+B
#define SUB A-B
#define INVB 1/B
#define INV 1/ADD
#define MUL A*B


/**
 * Prints the results of different bit operations (assignment a)
 *
 * @param int a First summand
 * @param int b Second summand
 * @return a+b Sum of a and b
 */
int add(int a, int b)
{
	return a + b;
}


/**
 * Prints different calculations
 * The reasoning for the results is in the comments
 *
 * @param void No params
 * @return 0 Program executed successfully
 */
int main(void)
{
	float pi = 3.14f;
	float euro = 13.7603f;
	int a = 90;
	int b = 15;


	// Output: "30 + 13 = 28 ?"
	// Problem: point before line calculation
	// A=15, B = 15 - 1
	// A*2 = 15*2 = 30, B*2 = 15 - 1 * 2 = 13
	// ADD: A+B*2 = 15 + 15 - 1 * 2 = 28
	printf("%d + %d = %d ? \n", A * 2, B * 2, ADD * 2);

	// Output: "15 / 14 = 0"  
	// A=15, B=15-1
	// A/B = 15 / 15 - 1 = 0 
	printf("%d / %d = %d\n", A, B, A / B);

	// Output: "-1"
	// 1/B = 1/15-1
	// 1/15 are both integers so the result is an integer => 1/15=0
	// 0-1= -1
	printf("%d\n", INVB);

	// Output: "14"
	// 1/ADD = 1/A+B = 1/15+15-1
	// 1/15=0, 0+15-1=14
	printf("%d\n", INV);

	// Output: "sizeof(pi+euro) = 4"
	// pi + euro = 3.14f + 13.7603f = 16.9003
	// sizeof returns the size in bytes of its operand
	// 16.9003 is a float number (because we added 2 floats), the size of floats are 4 bytes
	printf("sizeof(pi+euro) = %d\n", sizeof(pi + euro));

	// Output: "sizeof(3.14+13.7603) = 8"
	// when adding floating point numbers but the type isnt specified, the result is a double
	// size of double = 8 bytes
	printf("sizeof(3.14+13.7603) = %d\n", sizeof(3.14 + 13.7603));

	// Output: "sizeof('r'+1) = 4"
	// we know that when types like char or short are used in a arithmetic expression they are converted to an integer (integer promotion)
	// when adding a float and an integer, the integer is converted to a float and then the addition is executed
	// sizeof float is 4 byte
	printf("sizeof('r'+1) = %d\n", sizeof('r' + 1.f));

	// Output: "91 + 15 = 107 ?"
	// Using ++ after the variable makes it a "post-increment operator". In the Post - Increment, value is first used in an expression and then incremented
	// To increment the value before assigning it, ++var can be used as a pre - increment operator
	// a = 90, we increment a (a=91) and then print it ("91 + "..)
	// b = 15, we print b (b=15) and then increment it (b=16)
	// add(a, b) = add(91 + 16) = 107  
	printf("%d + %d = %d ? \n", ++a, b++, add(a, b));

	// Output: "max(91, 16) = 91"
	// since we incremented a and b in the last printf, a=91 and b=16
	// the last part is an if directive which says if a bigger than b, then print a, otherwise print b
	// a is bigger than b, therefore a is printed
	printf("max(%d, %d) = %d\n", a, b, (a > b ? a : b));

	// Output: "91 > 16 ? 1"
	// since we incremented a and b before, a=91 and b=16
	// the || means or
	// return truth value of (a is bigger than b (true) or a=100 (returns 100))
	// in C, if the left operand is true, the right side gets ignored and the result is automatically true => result of our comparison is true
	printf("%d > %d ? %d\n", a, b, (a > b) || (a = 100));

	// Output: "a = 91"
	// since we incremented a before, a=91
	// it could be assumed that a=100 because of the last printf but thats not the case because like mentioned above, the right side of the or got ignored
	// the = is used as comparison operator and not assigning
	printf("a = %d\n", a);
	b = b + pi + euro + 0.5;

	// Output: "b = 33"
	// b = b + pi + euro + 0.5 = 16 + 3.14f + 13.7603f + 0.5 = 33,4003
	// when printing floats as integer, C just cuts of the digits behind the decimal point
	printf("b = %d\n", b);

	return 0;
}