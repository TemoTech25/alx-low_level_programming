#include "main.h"

/**
 * factorial - write function that returns the factorial of given number
 * @n: the function should return from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
