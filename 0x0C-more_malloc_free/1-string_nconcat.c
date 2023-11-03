#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string (treated as an empty string if NULL)
 * @s2: second string (treated as an empty string if NULL)
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the new string, or NULL if memory allocation fails
 * or if either s1 or s2 is NULL and n is greater than 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1), len2 = strlen(s2);
	char *new_string;

	if (n > len2)
		n = len2;

	new_string = malloc(len1 + n + 1);
	if (!new_string)
		return (NULL);

	strcpy(new_string, s1);
	strncpy(new_string + len1, s2, n);
	new_string[len1 + n] = '\0';

	return (new_string);
}
