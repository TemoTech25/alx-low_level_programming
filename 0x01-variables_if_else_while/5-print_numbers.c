#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 *
 * Return: 0 (succes)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
