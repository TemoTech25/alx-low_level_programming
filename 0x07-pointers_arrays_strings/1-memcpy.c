#include "main.h"
/**
 * _memcpy - print out a function that copies memory area
 * @dest: data where is stored
 * @src: data where is copied
 * *@n: value of bytes
 *
 * Return: same detailed memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
