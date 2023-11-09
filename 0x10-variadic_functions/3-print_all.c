#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: If one of the strings if NULL, (nil) is printed instead.
 *
 * Example:
 * print_all("ceis", 'B', 3, "stSchool"); --> "B, 3, stSchool\n"
 */

void print_all(const char * const format, ...)
{
 va_list list;
 char *str, *sep = "";
 int i = 0;

 va_start(list, format);

 while (format[i])
 {
   switch (format[i])
   {
     case 'c':
       printf("%s%c", sep, va_arg(list, int));
       break;
     case 'i':
       printf("%s%d", sep, va_arg(list, int));
       break;
     case 'f':
       printf("%s%f", sep, va_arg(list, double));
       break;
     case 's':
       str = va_arg(list, char *);
       if (!str)
         str = "(nil)";
       printf("%s%s", sep, str);
       break;
     default:
       i++;
       continue;
   }
   sep = ", ";
   i++;
 }

 printf("\n");
 va_end(list);
}
