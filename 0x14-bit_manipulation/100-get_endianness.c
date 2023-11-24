#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union {
		long int i;
		char c[sizeof(long int)];
	} u;

	u.i = 1;

	return (u.c[sizeof(long int) - 1] == 1);
}
