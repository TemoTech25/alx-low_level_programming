#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory block to reallocate
 * @old_size: size of the memory block to reallocate
 * @new_size: new size of the memory block
 *
 * Return: pointer to the newly reallocated memory,
 * or NULL if reallocation fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}

