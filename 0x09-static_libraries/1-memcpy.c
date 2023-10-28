#include "main.h"

/**
 *_memcpy - print a function that makes same memory area
 *@dest: stored where is stored
 *@src: stored where is copied
 *@n: value of bytes
 *
 *Return: a copy of the bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		int e = 0;
		int i = n;

		for (; e < i; e++)
		{
			dest[e] = src[e];
			n--;
		}
		return (dest);
}
