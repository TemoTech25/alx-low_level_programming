#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function
 * does not return 0, or -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}

	return (-1);
}
