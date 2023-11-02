#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: Count of arguments
 * @argv: Arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, count;

	if (argc != 2 || (cents = atoi(argv[1])) < 0)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	while (cents >= 25)
	{
		cents -= 25;
		count++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		count++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		count++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		count++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
