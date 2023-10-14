#include <stdio.h> 

/**
 * main - print all the numbers of base 16 in lowercase
 * after add new line
 *
 * Return: 0 (win)
 */

int main(void)
{
	int i;
	char d;

	i = 0;
	d = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (d <+ 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
