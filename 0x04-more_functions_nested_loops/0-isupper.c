#include "main.h"
/**
 * _isupper -checking for uppercase character
 * @c: parameter to be checked
 * Return: 1
 * if c is uppercase, else 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
