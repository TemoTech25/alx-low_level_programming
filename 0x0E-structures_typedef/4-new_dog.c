#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - brings back the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int k;


	k = 0;


	while (s[k] != '\0')
	{
		k++;
	}


	return (k);
}

