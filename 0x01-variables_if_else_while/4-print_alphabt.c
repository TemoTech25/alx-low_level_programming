#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return 0;
}
