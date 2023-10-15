#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * Char must be checked
 * Return: 0 (win)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

