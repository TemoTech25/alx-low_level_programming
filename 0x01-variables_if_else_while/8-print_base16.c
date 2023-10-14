#include <stdio.h> 

/**
 * main - output all the numbers of base 16 in lowercase
 * after add new line 
 *
 * return: 0 (win)
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
	while (d < 10)
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
