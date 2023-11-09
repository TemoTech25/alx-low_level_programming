#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function print name using pointer
 * @name: string added 
 * @f: function from pointer
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
