#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);
    if (p == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	return (p);
}
