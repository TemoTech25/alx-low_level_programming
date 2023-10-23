#include <stdio.h>


int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * print your line of code here...
   * Remember:
   * - you must not use a
   * - you must not modify p
   * - should only print one statement
   * - you should not print out code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

