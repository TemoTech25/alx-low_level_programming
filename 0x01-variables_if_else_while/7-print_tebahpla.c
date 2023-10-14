#include <stdio.h>

/**
 * main - prints some lowercase alphabet  in reverse,
 * always followed by a new line.
 *
 * Return: 0 (win)
 */

int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
