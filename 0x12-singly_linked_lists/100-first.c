#include <stdio.h>

/**
 * print_before_main - prints a string before main is executed
 */
__attribute__((constructor)) void print_before_main(void)
{
   printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
   return (0);
}

