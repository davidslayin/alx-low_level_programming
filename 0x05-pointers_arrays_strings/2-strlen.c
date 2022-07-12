#include "main.h"

/**
 *_strlen - the length of a string
 *@s: string pointer
 *Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s[len] != '\0')
	{
		len++;
	}
	return (len);
}
