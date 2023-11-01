#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy to new memory space location
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[i] = '\0';
	return (s);
}
