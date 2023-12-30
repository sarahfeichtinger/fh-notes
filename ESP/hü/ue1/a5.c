#include <stdio.h>

int j = 5;


void fkt2(int j)
{
	// local parameter j gets set to 200 here
	j = 200;
	// i is not defined, because its a local variable in main (removed it here in print to make programm executeable)
	// "j=200"
	printf("j = %d\n", j);
}

void fkt1(int i)
{
	i = 100;
	printf("i = %d, j = %d\n", i, j);
	fkt2(j);
	printf("i = %d, j = %d\n", i, j);
	j = j + 5;
}

int main(void)
{
	int i = 10;

	// "i = 10, j = 5"
	// i is locally defined, j globally - so both can be used
	printf("i = %d, j = %d\n", i, j);

	// "i = 100, j = 5" (first print in fkt1)
	// i is locally defined in fkt1, j globally
	// 
	// "j = 200" (print in fkt2 called by fkt1)
	// j is locally set in fkt2, because j is a parametere of fkt2 and therefore the local j is used not the global one
	// 
	// "i = 100, j = 5" (second print in fkt1) 
	// j is a parameter in fkt2 it doesnt affect the caller function fkt1, so j stays the same
	fkt1(i);

	// "i = 10, j = 10"
	// j is 10 now, because the global j gets set at the end of fkt1
	printf("i = %d, j = %d\n", i, j);
	return 0;
}