#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 start at 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
