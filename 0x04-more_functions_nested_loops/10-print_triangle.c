#include "main.h"
/**
 * print_triangle - function that draws a triangle
 * @size: parameter for size
 * Return: none
 */
void print_triangle(int size)
{
	int height;
	int width;
	int draw;

if (size <= 0)
_putchar('\n');

for (height = 1; height <= size; height++)
{
for (width = 1; width <= (size - height); width++)
_putchar(' ');

for (draw = 1; draw <= height; draw++)
_putchar('#');

_putchar('\n');
}
}
