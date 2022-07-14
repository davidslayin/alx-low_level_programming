#include "main.h"
/**
 * print_diagonal - print diagonal line on the terminal
 * @n: the number of time \ should be printed
 */
void print_diagonal(int n)
{
	int s1, sp;

	if (n > 0)
	{
		for (sp = 0; sp < n; sp++)
		{
			for (s1 = 0; s1 < sp; s1++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
