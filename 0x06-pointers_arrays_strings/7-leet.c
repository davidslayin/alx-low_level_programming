#include "main.h"
/**
 * leet - the function
 * @str: parameter
 * Return: return str
 */
char *leet(char *str)
{
char small[] = {'a', 'e', 'o', 't', 'l'};
char capital[] = {'A', 'E', 'O', 'T', 'L'};
char leet[] = {'4', '3', '0', '7', '1'};
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == small[j] || str[i] == capital[j])
{
str[i] = leet[j];
}
}
}
return (str);
}
