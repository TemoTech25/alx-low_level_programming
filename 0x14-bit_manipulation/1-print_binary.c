#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
   unsigned long int mask;

   mask = 1UL << (sizeof(n) * 8 - 1);

   while (mask)
   {
       _putchar((n & mask) ? '1' : '0');
       mask >>= 1;
   }
}

