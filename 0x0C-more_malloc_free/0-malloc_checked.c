#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: bytes to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
