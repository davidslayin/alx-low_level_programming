#include "main.h"
/**
 * factorial - calcultes the factorial
 * @n: number factorial
 * Return: the result
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n <= 1)
	return (1);
return (n * factorial(n - 1));
}
