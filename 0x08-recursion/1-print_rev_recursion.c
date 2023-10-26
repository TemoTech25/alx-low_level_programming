#include "main.h"

/**
 * print _print_rev_recursion(char *s)
 * @s: function that prints a reverse
 *
 * Return: 0 (succes)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
