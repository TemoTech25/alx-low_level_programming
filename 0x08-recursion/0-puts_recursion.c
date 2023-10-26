#include "main.h"

/**
 *  _puts_recursion - print function like puts();
 *  @s: the input 
 *
 *  Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_ecursion(s + 1);
	}
	else
		_putchar('\n');
}
