#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
   unsigned int result = 0;
   int len = 0;

   if (b == NULL)
       return (0);

   while (b[len] != '\0')
   {
       if (b[len] != '0' && b[len] != '1')
           return (0);
       len++;
   }

   for (int i = len - 1; i >= 0; i--)
   {
       if (b[i] == '1')
       {
           result += 1 << (len - 1 - i);
       }
   }

   return (result);
}

