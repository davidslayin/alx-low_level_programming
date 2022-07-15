#include "main.h"
/**
 * cap_string - capitalize the letters of a string
 * @str: parametr
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
if (str[i] == '\n' || str[i] == '!' || str[i] == ',' || str[i] == ';' ||
		str[i] == '.' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
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
