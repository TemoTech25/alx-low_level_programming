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
 va_list args;
 char *str;
 unsigned int index;

 va_start(args, format);

 while (*format != '\0')
 {
   if (*format == 'c')
   {
     printf("%c", va_arg(args, int));
   }
   else if (*format == 'i')
   {
     printf("%d", va_arg(args, int));
   }
   else if (*format == 'f')
   {
     printf("%f", va_arg(args, double));
   }
   else if (*format == 's')
   {
     str = va_arg(args, char *);
     if (str == NULL)
     {
       printf("(nil)");
     }
     else
     {
       printf("%s", str);
     }
   }
   format++;
 }

 printf("\n");

 va_end(args);
}
