#include "main.h"

/**
 * rev_string - printing the string reversed
 * @s: string
 * Return: void is returned
 */
void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
	first = s[max - half];
	last = s[half];
	s[half] = first;
	s[max - half] = last;
	half--;
	}
}
