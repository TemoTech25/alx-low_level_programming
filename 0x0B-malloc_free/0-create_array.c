#include "main.h"
#include <stdlib.h>

/**
 * create_array - print create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
