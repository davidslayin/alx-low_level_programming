#include "main.h"

/**
 * print_sign - check and display the sign of a numb
 * @n: the number to be checked
 *
 *Return: 1,0 or -1 depending on the result
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
