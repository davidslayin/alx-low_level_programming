#include "main.h"
/**
 * reverse_array - reserces the contents of an array
 * of integers
 * @a: array.
 * @n: number of elements of an array
 * Return: none return
 */
void reverse_array(int *a, int n)
{

	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
	for (j = i + 1; j > 0; j--)
	{
	*(a + j) = *(a + (j - 1));
	*(a + (j - 1)) = temp;
	}
	}
}
