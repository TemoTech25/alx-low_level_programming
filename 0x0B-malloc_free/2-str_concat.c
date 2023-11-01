#include "main.h"
#include <stdlib.h>

/**
 * str_concat - find ends of input and add together for size
 * @s1: insert one to concat
 * @s2: insert two to concat
 * Return: concat (s1 and s2)
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
	s[i] = s1[i];
	i++;
	}
	i = 0;
	while (i < len2)
	{
		s[len1 + i] = s2[i];
		i++;
	}
	s[len1 + len2] = '\0';
	return (s);
}
