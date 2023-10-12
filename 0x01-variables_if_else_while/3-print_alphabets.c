#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	char uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
