#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with a separator between them
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 *
 * Example:
 * print_strings(", ", 2, "Jay", "Django"); --> "Jay, Django\n"
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
 va_list args;
 va_start(args, n);

 for (unsigned int i = 0; i < n; i++)
 {
   char *str = va_arg(args, char *);
   if (str == NULL)
   {
      printf("(nil)");
   }
   else
   {
      printf("%s", str);
   }
   if (separator != NULL && i < n - 1)
   {
      printf("%s", separator);
   }
 }

 va_end(args);

 printf("\n");
}
