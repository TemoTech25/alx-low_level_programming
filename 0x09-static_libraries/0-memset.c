#include "main.h"

/**
 * _memset - prints out filled a block of memory with a specific value
 * @s: begin address of memory to be filled
 * @b: desired value
 * @n: value of bytes to be changed
 *
 * Return: change array with new number for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
