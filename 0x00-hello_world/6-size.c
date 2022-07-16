#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu byte(s)\n", sizeof(i));
printf("size of a long int: %lu byte(s)\n", sizeof(l));
printf("size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("size of a float: %lu byte(s)\n", sizeof(d));
return (0);
}
