#include "main.h"
#include <stdio.h>

/**
 * _puts - Print a string to stdout
 * @str: The string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
    {
	putchar(*str);
	str++;
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	putchar('\n');
	return (0);
}
