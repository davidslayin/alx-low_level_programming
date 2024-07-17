#include "search_algos.h"

/**
 * linear_search - searching a value in an array of integers
 * using linear search
 *
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: return value -1 if the value is not present in the array
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i++;
	}
	return (-1);
}
