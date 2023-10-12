#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main - print the last digit of the number stored in the variable n at random
 * and determine whether n is great than 5, if it is 0, less than 6 not zero
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;
	{
		printf("Last digit of %d is %d", n, lastDigit);
	}
	if(lastDigit > 5) 
	{
		printf(" and is greater than 5\n");
	}
	else if(last digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
