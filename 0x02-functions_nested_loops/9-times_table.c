#include "main.h"

/**
 * times_table - evaluates description
 * Description - It prints 9 times table starting with 0
 * Return: 0 (succes)
 */

void times_table(void)
{
	int i;
	int c;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = i * c;

			if ((n / 10) == 0)
			{
				if (c != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (c == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (c == 9)
					continue;

				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
