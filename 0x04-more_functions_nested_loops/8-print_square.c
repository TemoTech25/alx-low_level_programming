#include "main.h"

/**
 * print_square - write out a square, followed by a new line;
 * @size: length and breath of the square
 *
 * Return: 0 (wini)
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
