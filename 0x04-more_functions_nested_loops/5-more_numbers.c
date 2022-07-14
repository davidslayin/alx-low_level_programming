#include "main.h"
/**
 * more_numbers - print numbers 0-14 ten times
 * followed by a new line
 */
void more_numbers(void)
{
	int a, b, c;

		for (b = 0; b <= 9; b++)
		{
		for (a = 0; a < 15; a++)
		{
		if (a > 9)
		{
		c = a / 10;
		_putchar(c + '0');
		}
		_putchar(a % 10 + '0');
		}
		_putchar('\n');
		}
}
