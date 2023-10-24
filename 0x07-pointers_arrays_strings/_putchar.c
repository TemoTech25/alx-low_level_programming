#include "main.h"
#include <unistd.h>

/**
 * _putchar - print out the char c to stdout
 * @c: The Character to write 
 *
 * Return: 1 (success)
 * On error return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
