#include "main.h"

/**
 * _strlen - print return of the length of a string
 * @s: str
 * Return: size length
 */

int _strlen(char *s)
{
	int longi = 0;
		
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
