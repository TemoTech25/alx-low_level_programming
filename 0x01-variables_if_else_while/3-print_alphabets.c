#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase, 
 * followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
