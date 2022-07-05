#include "main.h"

/**
 *_isalpha - checkes if its an alphabetic character
 *@c: the character to be checked
 *
 * Return: 0 or 1 depending on the result
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
