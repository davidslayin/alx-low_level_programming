#include <stdio.h>
/**
 * main - entry point for fizz test
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
	printf("Fizz\n");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz\n");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FuzzBuzz\n");
	}
	else
	{
	printf("%d\n", i);
	}
	}
	return (0);
}
