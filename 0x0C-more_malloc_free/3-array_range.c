#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array,
 * or NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		array[i] = min;

	return (array);
}
