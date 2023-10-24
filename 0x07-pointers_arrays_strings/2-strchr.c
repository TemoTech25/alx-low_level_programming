#include "main.h"
/**
 * _strchr - write out Entry point
 * @s: start input
 * @c: start input
 * Return: 0 (win)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
