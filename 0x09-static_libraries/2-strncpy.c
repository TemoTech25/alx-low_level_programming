#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;
	
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
	       	k++;
	}
	while (k < n)
	{

		dest[k] = '\0';
		k++;
	}
	return (dest);
}
