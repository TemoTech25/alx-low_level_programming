#include "main.h"
/**
 * _strpbrk - print out Entry point
 * @s: start input
 * @accept: start input
 * Return: 0 (win)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

	return ('\0');
}
