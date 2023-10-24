#include "main.h"
/**
 * _memset - fill/print a block of memory with a specific value
 * @s: start address of memory to be filled
 * @b: desired value
 * @n: number of n bytes to be changed
 *
 * Return: changed value with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
