#include <stdio.h>

/**
 * main -  print  a program  all possible combinations of single-digit numbers.
 *
 * Return: 0 (win)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
