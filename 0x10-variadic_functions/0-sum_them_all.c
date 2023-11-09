#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 *
 * Return: sum of all parameters
 *
 * Example:
 *   sum_them_all(4, 98, 1024, 402, -1024); --> 500
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list args;
  va_start(args, n);

  int sum = 0;
  for (unsigned int i = 0; i < n; i++)
  {
      sum += va_arg(args, int);
  }

  va_end(args);

  return sum;
}

