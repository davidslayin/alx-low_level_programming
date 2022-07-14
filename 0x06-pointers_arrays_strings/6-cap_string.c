#include "main.h"
/**
 * cap_string - capitalizes all letters in a string
 * @str: parameter
 * Return: return str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i == 0)
	{
	if ((str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
	continue;
	}
	if (str[i] == '\t' ||
			str[i] == '\n' || str[i] == '!' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')'
			|| str[i] == '{' || str[i] == '}')
	{
	++i;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	continue;
	}
	}
	}
	return (str);
}
