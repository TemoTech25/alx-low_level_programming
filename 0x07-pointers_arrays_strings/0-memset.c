#include "main.h"
/**
 * _memset - print out a block of memory with a specific value
 * @s: begin address of memory to be filled
 * @b: print desired value
 * @n: value of bytes to be changed
 *
 * Return: new different array 
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
