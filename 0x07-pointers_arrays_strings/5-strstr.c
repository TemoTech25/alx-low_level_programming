#include "main.h"
/**
 * _strstr - write out Entry point
 *
 * @haystack: start input
 * @needle: start input
 * Return:0 (win)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
