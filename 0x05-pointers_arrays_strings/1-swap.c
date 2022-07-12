#include "main.h"

/**
 * swap_int - swaps the value of the two integers
 *@a: the first integer variable
 *@b: the second integer variable
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
