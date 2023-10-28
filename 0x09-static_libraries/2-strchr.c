#include "main.h"

/**
 * _strchr - insert point
 * @s: insert
 * @c: insert
 * Return: Always 0 (win)
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
