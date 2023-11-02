#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
  int i, n, len, f, digit;

  i = 0;
  n = 0;
  len = 0;
  f = 0;
  digit = 0;

  while (s[len] != '\0')
      len++;

  while (i < len && f == 0)
  {
      if (s[i] < '0' || s[i] > '9')
          return (-1);

      digit = s[i] - '0';
      n = n * 10 + digit;
      f = 1;
      if (s[i + 1] < '0' || s[i + 1] > '9')
          break;
      f = 0;
      i++;
  }

  if (f == 0)
      return (0);

  return (n);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
  int i, sum = 0;

  if (argc == 1)
  {
      printf("0\n");
      return (0);
  }

  for (i = 1; i < argc; i++)
  {
      if (_atoi(argv[i]) == -1)
      {
          printf("Error\n");
          return (1);
      }
      sum += _atoi(argv[i]);
  }

  printf("%d\n", sum);

  return (0);
}
