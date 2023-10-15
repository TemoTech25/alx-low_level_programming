#include "main.h"

/**
 * jack_bauer - prints every minute of the day of JB
 * start at 00:00 to 23:59
 *
 * return: 0
 */

void jack_bauer(void)
{
	int i;
	int b;

	i = 0;

	while (i < 24)
	{
		b = 0;

		while (b < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');

			_putchar('\n');

			b++;
		}

		i++;
	}
}
