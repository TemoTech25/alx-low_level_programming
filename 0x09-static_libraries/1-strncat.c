#include "main.h"

/**
 * _strncat - print function concatenate strings
 * @dest: inserted value
 * @src: inserted value
 * @n: inserted value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
		int k;
		int l;

		k = 0;
		while (dest[k] != '\0')
		{
			k++;
		}
		l = 0;
		while (l < n && src[l] != '\0')
		{
		dest[k] = src[l];
		k++;
		l++;
		}
		dest[k] = '\0';
		return (dest);
}
